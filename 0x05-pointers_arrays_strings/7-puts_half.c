#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: var received
 * Return: None.
 */

void puts_half(char *str)

{


	int x; /* x is the total lenght of the string including the null 0 */
	/* lenght of the string does not include the null only the characters*/
	int mid; /* a var that shows the middle of the string */


	for (x = 0; str[x] != '\0' ; x++)
	{
	}
		if (x % 2 != 0)
	{
		mid = (x + 1) / 2;
	}
		else
	{
		mid = x / 2;
	}
	for (; mid < x; mid++)
	{
		_putchar(str[mid]);
	}
_putchar('\n');

}
