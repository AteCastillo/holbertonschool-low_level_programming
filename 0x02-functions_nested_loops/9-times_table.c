#include "holberton.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: None.
 */

void times_table(void)

{

	int n, nu, num;

	for (n = '0'; n <= '8'; n++)
	{
		for (nu = '0'; nu <= '9'; nu++)
		{
			for (num = '0'; num >= '9'; num++)
			{
				_putchar(nu);
				_putchar(',');
				_putchar(' ');
		}
	}
		_putchar('\n');
}
