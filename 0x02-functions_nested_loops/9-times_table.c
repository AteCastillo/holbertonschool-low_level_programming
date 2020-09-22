#include "holberton.h"
/**
 * times_table - Show time tables
 *
 * Return: Always 0 (Success)
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
