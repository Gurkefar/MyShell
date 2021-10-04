#define _GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h> 


void execCommand(const char *path, const char *args[]);
void pwd();
char *truncString(char *str, int pos);


int main(int argc, char *argv[]){
	const char *path = "/usr/bin/";
	char *file;
	char *abs_path; 
	char string[100];
	char *input[20];
	

	while(1){
		pwd(); // print working directory always		
		int i = 0;
			
		fgets(string, 100, stdin);
		input[i] = strtok(string, " ");
		file = input[i];

		abs_path = malloc(strlen(path) + strlen(file));
		strcpy(abs_path, path);
		strcat(abs_path, file);

		while(input[i] != NULL){
			input[++i] = strtok(NULL, " "); // commands/arguments separated by space
		}

		char *command[i + 1];


		for (int j = 0; j < i; j++){
			command[j] = input[j];
			truncString(strdupa(command[j]), -1);
		}
		command[i] = NULL;
		if (i == 1){
			abs_path = truncString(strdupa(abs_path), -1);
		}

		command[i - 1] = truncString(strdupa(command[i - 1]), -1);
		execCommand(abs_path, command);
	}
	return 0;
}

void pwd(){
	char wd[200];
	getcwd(wd, sizeof(wd));
	printf("Current directory: ~%s$ ", wd);
	return;
}


void execCommand(const char *path, const char *args[]){
	pid_t pid = fork();

	if (pid < 0){
		fprintf(stderr, "Couldn't fork\n");
		exit(1);
	}
	else if (pid == 0){
		if (execvp(path, args) < 0){ // returns negative, if command is not valid
			if (!strcmp(path, "/usr/bin/cd")){
				chdir(args[1]);
				return;
			}
			else{
				printf("Command couldn't be executed..\n");
			}
		}
		exit(0);
	}
	else{
		wait(NULL);
		return;
	}

}


char *truncString(char *str, int pos)
{
    size_t len = strlen(str);

    if (len > abs(pos)) {
        if (pos > 0)
            str = str + pos;
        else
            str[len + pos] = 0;
    }

    return str;
}
