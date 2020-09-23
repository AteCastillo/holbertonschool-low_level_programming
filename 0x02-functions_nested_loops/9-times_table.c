#include "holberton.h"
/**
 * times_table - Show time tables
 *
 * Return: None
 */
void times_table(void)
{
	int a, b, res;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			res = a * b;
			if (b == 0)
				_putchar(res + '0');
			else if (res > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(res /10 + '0');
				_putchar(res %10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
		}
		_putchar('\n');
	}
}
