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
	int i; /* iterador del segundo for */

	for (x = 0; str[x]; x++)

		if (x % 2 != 0)
	{
		mid = (x + 1) / 2;
	}
		else
	{
		mid = x / 2;
	}
	for (i = mid; i < x; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');

}
