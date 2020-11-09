#include "holberton.h"

/**
 * create_file - check the code for Holberton School students.
 * @filename: name of the file
 * @text_content: string to writeo the file
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wrt, count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		for (count = 0; text_content[count] != '\0'; count++)
		{
		}
	wrt = write(fd, text_content, count);
	close(fd);
	if (wrt == -1)
		return (-1);
	return (1);
}
