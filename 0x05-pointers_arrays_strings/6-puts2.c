#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: var received
 * Return: none.
 */


void puts2(char *str)
{
	int n; /*n to count number of characters in the string */

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}

/**
 *	while (str[n] != '\0')
 *	{
 *		n++;
 *
 *
 *	if (n % 2 == 0)
 *	{
 *		_putchar(str[n]);
 *	}
 *	}
*/
	_putchar('\n');

}
