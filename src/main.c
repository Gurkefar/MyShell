#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <wait.h>
#include "asciiart.h"   //All the ASCII art is in this file
#include "commands.h"   // Some trivial commands is in this file
#define MAX_SIZE 100
#define ARG_SIZE 200
#define PATH_SIZE 500



void takeInput();
void executeCommand(char command[], char path[], char *argv[], int piping, char *argv2[], char path2[]);

int main() {

    goatGif(2,250000);
    greatesOfAllTimes(1100000);
    printGoat();    //An awesome goat
    clearScreen();
    printStartScreen();

    while (1) { //This simple while loop is repeated infinite.
        pwd();
        takeInput();
    }
}

void takeInput() {
    char fullPath[PATH_SIZE]; //Array that contains the full path every time the whileloop is iterating
    char input[MAX_SIZE];   //contains the input from the user
    char *pathToBin = "/usr/bin/";
    char *argv[ARG_SIZE]; //  An array of pointers that contains the arguments for the command
    char fullPath2[PATH_SIZE];    //In the case og piping, this is where the the path to the second command is stored
    char *argv2[ARG_SIZE];   //Array of pointers to the arguments of the piping command

//    for (int i = 0; i < sizeof(input) ; ++i) {  //Remove the last \n character in the input command and replace it with NULL
//        input[i] = '\0';
//    }

    if (!fgets(input, MAX_SIZE, stdin)){    //Take input from the user and
        printf("An error with fgets() has occured in the takeInput() function at line %d", __LINE__-1);
        exit(-2);}
    size_t length = strlen(input);
    if (input[length - 1] == '\n')  //In case of any linebreak at the end of the input string, then it is converted into a NULL character.
        input[length - 1] = '\0';

    char *token;
    token = strtok(input, " ");

    int i = 0;
    while (token != NULL && strcmp(token,"|") != 0) {  // split the input commands and arguments until ether NULL or a "|" is met
        argv[i] = token;
        token = strtok(NULL, " ");
        i++;
    }
    argv[i] = NULL; //  Terminate the argv[] array at the end with NULL;
    strcpy(fullPath, pathToBin);    //insert the beginning of the path in the full path array
    strcat(fullPath, argv[0]);  // insert the argument at the end of the full path.

    int pipe = 0;   // initialize the boolean pipe variable to 0;

    token = strtok(NULL, " ");  //jump one step to avoid the "|" character
    int j = 0;
    while (token != NULL ) {//check if the next character is NULL, if not then it is a pipe command.
        argv2[j] = token;   //store the command at argv2 array
        token = strtok(NULL, " ");
        j++;
        pipe = 1;   //set the boolean pipe to 1, so we know that a pipe has occurred.
    }

    argv2[j] = NULL;    //argv2[] now contains the piping command
    strcpy(fullPath2, pathToBin);   //Create the path to the piped command
    if(argv2[0] != NULL)
    strcat(fullPath2, argv2[0]);    //Add the user input the to path.

    for (int l = 0; l < strlen(fullPath); ++l) {    //Ensure that there is no linebreak in the fullpath array
        if (fullPath[l] == '\n') {
            fullPath[l] = '\0';
        }
    }

    for (int l = 0; l < strlen(fullPath); ++l) {    //Ensure that there is no linebreak at the piped command
        if (fullPath2[l] == '\n') {
            fullPath2[l] = '\0';
        }
    }
    executeCommand(argv[0], fullPath, argv, pipe, argv2, fullPath2);    //Send the parameter
}

void executeCommand(char command[], char path[], char *argv[], int piping, char *argv2[], char path2[]) {

//    for (int i = 0; i < 3; ++i) {     //DEBUGGING PURPOSES
//        printf("<<<<%s\n",argv[i]);
//    }
    //printf("%s  %s  %s  %s  %s <<<<<%d",command,path,*argv,*argv2,path2,piping); //>> DEBUGGING <<

    if (piping == 0) {  //If there is no piping, do the following:

        if (strcmp(command, "cd") == 0) {  //In case of the cd command, then we actually need to call the chdir, as cd is an alias
            if(argv[1] == NULL){    //If there is no arguments, then the directory is changed to the root directory of the UNIX system
                chdir("/");
            }
            else if(strcmp(argv[1], "..") == 0){    //In case of the ".." argument, then we move up to the parent directory
                chdir(argv[1]);
            }
            else {
                char newDir[DIRECTORY_MAX_LENGTH]; //if the argument is a directory, within the working directory, then go to that
                getcwd(newDir, sizeof(newDir)); // copy the current directory to "newDir"
                strcat(newDir, "/"); //Add "/" to newDir
                strcat(newDir, argv[1]);    //Add the argument to newDir
                if (chdir(newDir) != 0) {   //Finally, able to change directory
                    printf("The directory %s does not exist\n", argv[1]);
                }
            }
        } else if (strcmp(command, "goat") == 0) {  //Print an awesome goat
            printGoat();
        } else if (strcmp(command, "exit") == 0) {  //Exit command
            exit(0);
        } else {
            int pid = fork();   //As the command is not one of the already diffende above, then it must be a standard UNIX command, herby a new process is created to handle that
            if (pid == 0) {
                printf("\n");
                execvp(path, argv); //Replace the image of the duplicated process with the command at the given path, and the arguments.
                fprintf(stderr, "Could not execute execvp()");
            } else {
                wait(NULL);
            }
        }
    }
    //printf("%s",argv2[0]);
    else{   //If there is piping, then do this:

        int fd[2];
        if(pipe(fd) == -1){ //Open pipe on fd.
            printf("An error has occurred with pipe() at line %d\nTerminating the GOAT-shell", __LINE__);
        }

        int pid1 = fork();  //Creating the first process as a clone of the main proccess.
        if  (pid1 == -1){
            printf("An error has occurred with fork() at line %d\nTerminating the GOAT-shell", __LINE__);
            exit(-1);
        }

        if  (pid1 == 0){ //Child process;
            dup2(fd[1], STDOUT_FILENO); //Dublicate the file descriptor to STDOUT
            close(fd[0]);
            close(fd[1]);
            execvp(path, argv); //Change the image of the cloned process, to the desired command

        }
        waitpid(pid1,NULL,0);
        int pid2 = fork();  //Create a duplicate of the current process.
        if  (pid2 == -1){
            printf("An error has occurred with fork() at line %d\nTerminating the GOAT-shell", __LINE__);
            exit(-1);
        }

        if  (pid2 == 0){ //Child process;
            dup2(fd[0], STDIN_FILENO);  //Duplicate the file descriptor to STDIN
            close(fd[0]);
            close(fd[1]);
            execvp(path2, argv2);   //Change the image of the cloned process, to the desired command
        }

        close(fd[0]);
        close(fd[1]);

        waitpid(pid2,NULL,0);   //Wait for the second process to finish
    }
}

// TEST COMMAND:
// ping -c 5 google.com | grep rtt

