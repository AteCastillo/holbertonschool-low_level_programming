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
	char *buffer = malloc(1024);
	char **argv = malloc(1024);
	size_t size = 0;
	int get, c, i=0, status;
	char *ptr, delim = ' ';
	pid_t child;

	while (1)
	{
		write (STDOUT_FILENO, "prompt$ ", 8);
		get = getline(&buffer, &size, stdin);
		if (get == -1)
		{
			if (get == EOF)
			{
				free(buffer);
				free(argv);
				break;
				write (1, "\n", 1);
				return (1);
			}
			perror("error");
			free(buffer);
			free(argv);
			return(1);
		}
	ptr = strtok(buffer, &delim);
	while (ptr)
	{
		argv[i] = ptr;
		ptr = strtok(NULL, &delim);
		if (ptr != NULL)
			write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	child = fork();
	if (child == -1)
	{
		perror("error1");
	}
	if (child == 0)
	{
		c = execve(argv[0], argv, NULL);
			if (c == -1)
			{
				perror("error2");
				free(buffer);
				free(argv);
				return(1);
			}
	}
	else
		wait(&status);
	}
	free(argv);
	free(buffer);
	return (0);
}
