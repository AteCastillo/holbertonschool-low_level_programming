#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
/**
 * main - stat example
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buffer = NULL;
	char **argv = malloc(1024);
	size_t size = 0;
	int get, i, status; /*get is the return from getline*/
	char *ptr;
	pid_t child;

	while (1)
	{
		write (STDOUT_FILENO, "prompt$ ", 8);
		buffer = malloc(1024); /*everytime a new word is entered it has to be an allocation*/
		get = getline(&buffer, &size, stdin);
		if (get == -1)
		{
			if (get == EOF)
			{
				free(buffer);
				free(argv);
				write(1, "\n", 1);
				return (1); /*instead of returning here I can use a break and only the last return*/
			}
			perror("error");
			free(buffer);
			free(argv);
			return(1);
		}
		for (i = 0; buffer[i] != 0; i++)
		{ /*this is to go to the end of the arguments, when the enter is done a new line is added so it is necesary to convert this new line (i-1) in a null*/
		}
		buffer[i - 1] = '\0';
		ptr = strtok(buffer, " ");
		i = 0;
		while (ptr)
		{
			argv[i] = malloc(1024);
			argv[i] = ptr;
			ptr = strtok(NULL, " ");
			i++;
		}
		argv[i] = NULL;
		child = fork();
		if (child == -1)
		{
			perror("error1");
		}
		if (child == 0)
		{
			if(execve(argv[0], argv, NULL) == -1) /*it is
								 doing both things
								 at the same time.*/
			{
				perror("error2");
				free(buffer);
				free(argv);
				exit(1);
			}
		}
		else
			wait(&status);
	}
	free(argv);
	free(buffer);
	for (i = 0; i < 1024; i++)
	{
		free(argv[i]);
	}
	return (0);
}
