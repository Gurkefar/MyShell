//This files contains some trivial commands executed by the main function

//
// Created by johannes on 25/09/2021.
//

#ifndef MYSHELL_W_PIPE_COMMANDS_H
#define MYSHELL_W_PIPE_COMMANDS_H

#endif //MYSHELL_W_PIPE_COMMANDS_H

#define DIRECTORY_MAX_LENGTH 500

void pwd() {
    char directory[DIRECTORY_MAX_LENGTH];
    getcwd(directory, sizeof(directory));
    printf("%s$ ", directory);
}

void clearScreen() {

    int pid = fork();

    if (pid == 0) {
        printf("\n");
        execl("/usr/bin/clear", "/usr/bin/clear", NULL);
        fprintf(stderr, "Could not execute execvp()");
        printf("\n");
    } else {
        wait(NULL);
    }
}
