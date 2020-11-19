Shell testing
getp. GETPPID:
Write a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does echo $$ print the same value? Why?
one. Write a program that prints all the arguments, without using ac.
two. Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.
man 3 getline
important make sure you read the man, and the RETURN VALUE section, in order to know when to stop reading Keyword: “end-of-file”, or EOF (or Ctrl+D).
three. Write a function that splits a string and returns an array of each word of the string.
man strtok
four. Write a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.
fifth. Write a program that prints the address of env (the third parameter of the main function) and environ (the global variable). Are they they same? Does this make sense?
environ. Write a program that prints the environment using the global variable en\
viron.
sixth. _getenv. Write a function that gets an environment variable. (without using getenv)
Prototype: char *_getenv(const char *name);
man 3 getenv
path. Write a function that prints each directory contained in the the environment variable PATH, one directory per line.
**path_list.** Write a function that builds a linked list of the PATH directories.
Write a program that looks for files in the current PATH.
Usage: _which filename ...
*simple_shell.* Using everything we saw, write a first version of a super simple shell that can run commands with their full path, without any argument.
