#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av, char **env)

{
	extern char **environ;
	int i;

	(void)ac;
	(void)av;
	for (i = 0; env[i] != 0; i++)
	{
		printf("%s\n", environ[i]);
	}
		return (0);
}
