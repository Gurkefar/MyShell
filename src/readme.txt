__________________________________________________________________________________________________
__________________________________________________________________________________________________

                                                      88                     88 88
                                     ,d               88                     88 88 
                                     88               88                     88 88
 ,adPPYb,d8  ,adPPYba,  ,adPPYYba, MM88MMM  ,adPPYba, 88,dPPYba,   ,adPPYba, 88 88  
a8"    `Y88 a8"     "8a ""     `Y8   88     I8[    "" 88P'    "8a a8P_____88 88 88   (_(
8b       88 8b       d8 ,adPPPPP88   88      `"Y8ba,  88       88 8PP""""""" 88 88   /_/'_____/) 
"8a,   ,d88 "8a,   ,a8" 88,    ,88   88,    aa    ]8I 88       88 "8b,   ,aa 88 88    " |      | 
 `"YbbdP"Y8  `"YbbdP"'  `"8bbdP"Y8   "Y888  `"YbbdP"' 88       88  `"Ybbd8"' 88 88	|""""""|
 aa,    ,88                                 
  "Y8bbdP"   
__________________________________________________________________________________________________
__________________________________________________________________________________________________  

                 Welcome to the readme for the GOAT Shell v 1.0!


----------
.:README:.
----------



.:Compilation:.

- Open your UNIX terminal and navigate to the directory where the 'main.c' file is located
- Run the command 'gcc main.c -o shell' and await the prompt to complete the compilation
- Upon completion, run the command './shell'

Congratulations, you are now running the GOAT terminal - baaaaaah!


.:Using the Shell:.

GOAT is a UNIX based shell program that enables you to communicate with the computer's underlying hardware by writing simple commands.  
Upon startup you will be welcomed by the GOAT logo, and your current directory will be printed on the screen followed by a “$” character and a flashing command prompt.
This means that GOAT is awaiting your command. 
In the following sections, I will show you some simple examples of commands, and how to navigate within GOAT.


.:'cd'

Change Directory allows you to change your current directory to another one. 
By only typing 'cd', you will be taken to your 'home' directory of your UNIX system.
If you type 'cd ..', you will go to the parent directory of your current directory.
Lastly you can type 'cd /SomeDirectoryPath/', and you will be taken to that directory location.


.:'cat %filename'

This command will print out the content of the specified file on the screen. Useful for just having a look.


.:'ls'

This command will list the content of the working directory. You can also add the attributes '-l' or '-a' or combine them to 'ls -a -l'. 

'-l' will give you the long listing format, which will give you more information about the content such as permissions and ownership. 
'-a' will show you all the files, also hidden files will are listed with a '.' in front of their name.


.:'|'

This is the pipe character, and is used to take the output of a command and use it as input in another command. 
Example: 'cat %filename | grep goat'.

This will grab the content of the given filename and use it as the input for the grep command. 
It will then sift out the lines that contain the term 'goat' in them. The sky is the limit with this operator!

 


-----------------------
.:Useful Information:.
-----------------------


Here are some short paragraphs, explaining some of the concepts used in a Shell, to help you understand what is going on behind the scenes:


.:System Calls:.

In order to implement the functionality of a shell, it would be a quite extensive task to write functions from scratch, since the program would be limited to its own address space (user space). However, we can gather some of the functionality from the kernel using system calls. In our case, the focus is on processes control - the creation and termination thereof.
This makes sense in relation to implementing a shell, since this encapsulates initiating new processes, with different process images depending on the command.

Here are the main systemcalls utilized in GOAT:

- fork()
Probaly the most important of them all. fork() creates a new process by duplicating the calling process. By default we now have two processes with the exact same process image - one parent and a child when called once.

- exec()
In order to actually do something useful with fork() we need to replace the process image of the child (or parent), 
since a new process probaly have been created in order to gain some different functionality. 
This is exactly what exec does - it simply overwrites the current process image with a new, specified by the arugments passed. 
In our case the variation execvp(const char* file, const char* argv[]) is used. The first argument specifies the path of the executable file, 
and the second is an array of strings, sepcifying the command line arguments.

- wait()
Suspending execution of the calling process, until one of its children changes its process state - i.e. we are waiting for the current command to finish executing, 
before the shell program is ready to take a new command.
Waitpid() is also being used when piping, since we have two different child processes running, and we want to specify exactly what process we are waiting for.




.:Program Environment:.

For our program we have used, notepad and C-lion to write all of the code for the shell.
We used Linux Ubuntu to test if the shell worked and what commands it would allow us to run.
The librabies used are not out of the usual (e.g "stdio.h", "stdlib.h", "unistd.h")
UNIXs' environment is defined by variables, these variables are then defined by the user, the system and the shell
We have made our own programming environment easier by making functions and system calls in the code, 
which makes it easier for us as programmers to extend the set of predefined procedures.




.:Background Program Execution:.

Definition: "Any process group, other than a foreground process group, that is a member of a session that has established a connection with a controlling terminal."

In the linux terminal, the user is displayed the foreground processes of the Shell and can execute commands. 
If the user should wish to push a process to the background execution they can do so by the use of the ampersand '&'. 
This capability allows the user to run several different processes at the same time in the background of the terminal.
An example could be that the user wishes to move a big file, but would like to use the terminal as the process is being executed.
This example could be done with the following command: 'cp %very_large_file /destination &'




.:I/O Reirection:.

Input and Output redirection, is a concept whereby a user can select and/or alter the path of a given datastream between commands and/or files. There are three streams that flow between a program and it's environment: Standard Input (stdin), Standard Output (stdout) and Standard Error (stderr). These streams can be fixed between either I/O, such as a keyboard or a display, and the program which is bing used. A keyboard-program-display is a very common way of having these data streams arranged. Another useful way of having these data streams arranged is between programs. 

Instead of running a program, saving the output and running a second program on the saved output, you can use a pipe. These redirects the data from the stdout of one program straight into the stdin of another. This can save quite a bit of time. An example:

'ls -a | sort -n'

This command won't print the result of 'ls -a' to your terminal, but instead run 'sort -n' on the output, which then in turn will be displayed in the terminal. This will give your the alphabetically sorted list of files in your current directory in one fell swoop.


Another way of redirecting datastreams is with the '>' redirection operator. This lets you write straight to files, instead of displaying the information straight to your terminal. This can be useful in situations where you are expecting alot of text, and don't want to clog up your terminal window. The data can then be used later, as it waits for you in the file. This can also be used to estalblish log files, saving the output of commands and programs without having to mess with the data in a middle stage. An example of using this operator could look like this:

'ping www.google.com -c 5 > ping_data.txt'

This command will save the ping log into the file 'ping_data.txt', as long as the .txt file already exists. Otherwise '>>' will create the file for you in the process.




	                       oOOD
	                       ||
	                       ||               
	                     ---------           
	                     -AUTHORS-          
	                     ---------           
	     ******************************************
	 -- *  Mandatory Assignment 1 - Shell          *
	  --*  Group 19:                               *
	 -- *  Johannes, Bjørn, Gustav, Jonas, Philip  *
	    *  29.09.2021                              *
	     ******************************************

