#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main(void)
{

	char *string = malloc(sizeof(char) * 1024);
	size_t size = 1024;
	int i;
	char *ptr, delim = ' '; /*ptr is a pointer to the next token */

	write (STDOUT_FILENO, "$ ", 2);
	getline(&string, &size, stdin);
	ptr = strtok(string, &delim); /*&save to modify the pointer*/
	while (ptr != NULL)
	{
		for (i = 0; ptr[i] != '\0'; i++)
		{
		}
		write (STDOUT_FILENO, ptr, i);
		ptr = strtok(NULL, &delim);
		if (ptr != NULL) /* to avoid the new empty line */
			write (STDOUT_FILENO, "\n", 1);
	}
	free(string);
	return (0);
}
