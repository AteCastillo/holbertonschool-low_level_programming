#include "holberton.h"

/**
 * append_text_to_file - check the code for Holberton School students.
 * @filename: pointer to the name of the file
 * @text_content: content of the file
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0664);
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
