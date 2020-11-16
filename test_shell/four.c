#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */

int main(void)
{

	pid_t child_pid;
	int status, i;
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	/*write (STDOUT_FILENO, "$ ", 2);*/

	for(i = 0; i < 5; i++)
	{
		child_pid = fork();

		if (child_pid == 0)
			execve(argv[0], argv, NULL);

		else
		{
			write (STDOUT_FILENO, "$ ", 2);
			wait(&status);
		}
	}
	return (0);
}
