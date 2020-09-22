#include "holberton.h"

/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 * Return: None.
 */

void print_alphabet_x10(void)


{
	char ch, nu;

	for (nu = '0'; nu <= '9' ; nu++)

	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
