#include "holberton.h"
void close_all(int file);
/**
 * main - check the code for Holberton School students.
 * @argc: pointer to name of the file
 * @av: pointer to pointer of the file
 * Return: Always 0.
 */
int main(int argc, char *av[])
{
	int f_from, f_to, wrt, rd = 1; /*rd is to read */
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (rd > 0) /* it is going to loop until no more characters*/
	{
		rd = read(f_from, buffer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
			free(buffer);
		}
		if (rd > 1)
			wrt = write(f_to, buffer, rd);
		if (wrt == -1)
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	free(buffer);
	close_all(f_from);
	close_all(f_to);
	return (0);
}
/**
 * close_all - check the code for Holberton School students.
 * @file: name of the file
 * Return: Always 0.
 */
void close_all(int file)
{
	int close_s;

	close_s = close(file);
	if (close_s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file);
		exit(100);
	}
}
