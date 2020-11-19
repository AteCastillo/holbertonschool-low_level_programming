#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
char *_getenv(const char *name);

int main(void)
{
	printf("real getenv: %s\n", getenv("PATH"));
	printf("my getenv: %s\n", _getenv("PATH"));
	return (0);
}
char *_getenv(const char *name)
{
	extern char ** environ;
	int i, c;
	size_t j;

	for (i = 0; environ[i] != '\0'; i++)
	{
		for (j = 0; environ[i][j] != '='; j++)
		{
		}
		c = strncmp(environ[i], name, j);
			if ( c == 0)
			{
				strtok(environ[i], "=");
				return(strtok(NULL, "="));
			}
	}
	return (NULL);
}
