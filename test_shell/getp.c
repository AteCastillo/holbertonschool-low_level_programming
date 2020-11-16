#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid, my_ppid; /*datatype could be replaced by int*/

    my_ppid = getppid();
    my_pid = getpid();
    printf("%u\n", my_ppid);
    printf("%u\n", my_pid);
    return (0);
}
