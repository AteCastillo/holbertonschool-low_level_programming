#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *_getenv(const char *name);
void p_path(char *list);

int main(void)
{
        p_path(_getenv("PATH"));
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
		if ( c == 0) /*if 0 it means there is a coincidence*/
		{
			strtok(environ[i], "=");
			return(strtok(NULL, "=")); /*if there is a coincidence it returns
						     the value of the variable found */
		}
	}
	return (NULL);
}

void p_path(char *dir) /* get the return of _getenv (value of the var: directories) */

{
	char *token;

	if (dir == NULL)
		return;

	token = strtok(dir, ":");

	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":"); /*this allows to move the token to the next,
				     after ":" */
	}
}
