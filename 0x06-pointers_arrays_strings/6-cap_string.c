#include "holberton.h"


/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: var received
 * Return: string.
 */

char *cap_string(char *str)

{

		int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		if (
			str[x] == ',' || str[x] == ';' || str[x] == '.' ||
			str[x] == '!' || str[x] == '?' || str[x] == '"' ||
			str[x] == '(' || str[x] == ')' || str[x] == '{' ||
			str[x] == '}' || str[x] == ' ' || str[x] == '\n' ||
			str[x] == '\t'
			)
		{
			if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
			{
				str[x + 1] = str[x + 1] - 32;
			}
		}
	}
	}
	return (s);
}
