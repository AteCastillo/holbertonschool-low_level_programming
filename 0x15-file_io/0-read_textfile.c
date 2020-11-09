#include "holberton.h"

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: pointer to char
 * @letters: int received
 * Return: Always 0.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wtr, count; /*fd = file descriptor */

	char *buffer = malloc(letters); /* or (sizeof(char) *letters)*/

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count = read(fd, buffer, letters); /*fd calls the open function*/

	wtr = write(STDOUT_FILENO, buffer, count);
	if (wtr == -1)
		return (0);

	close(fd);
	free(buffer);
	return (wtr);
}
