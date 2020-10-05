#include "holberton.h"

/**
 * _strstr - a function that locates a character in a string
 * @haystack: pointer
 * @needle: char received
 * Return:the pointer to char or 0 if dont have coincidence
 */

char *_strstr(char *haystack, char *needle)
{
	

	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}

	return ('\0');
}
