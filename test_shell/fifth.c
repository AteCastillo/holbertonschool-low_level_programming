#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av, char **env)
{
	extern char **environ;

	(void)ac;
	(void)av;
	printf("address of env: %p\n", (void *) &env);
	printf("address of environ: %p\n", (void*) &environ);
	return (0);
}
