#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: None.
 */

void more_numbers(void)

{
	int nu, num;

	for (nu = '0'; nu <= '9'; nu++)
	{
		for (num = 0; num <= 14; num++)

		{
		if (num > 9)
		{
			_putchar(num / 10 + '0');
		}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');


	}
}
