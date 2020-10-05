#include "holberton.h"

/**
 * _strstr - a function that locates a character in a string
 * @haystack: pointer
 * @needle: char received
 * Return:the pointer to char or 0 if dont have coincidence
 */

char *_strstr(char *haystack, char *needle)
{
	int i, n;

	if (*needle == 0)
		return (haystack);

	for (n = 0; haystack[n] != '\0'; n++)
	{
		if (needle[0] == haystack[i])
		{
			for (i = 0; needle[i] >= 0 && haystack[i + n] >= 0; i++)
			{
				if (needle[i] != haystack[i + n])
				break;
			}
		}
		if (needle[i + 1] == '\0')
			return (haystack);


	}
	return ('\0');
}
