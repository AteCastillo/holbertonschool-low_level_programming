#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
