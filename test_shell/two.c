#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buffer = malloc(1024);
	size_t size = 1024;
	int get;

	while (1) /*If no error it is an infinite loop that always
		    returns the prompt */
	{
	printf("$ ");
	get = getline(&buffer, &size, stdin);

	if (get == -1)
	{
		if (get == EOF)
			break;
		perror("error");

	}
	else
		printf("%s", buffer);

	}
	free(buffer);
	return (0);
}
