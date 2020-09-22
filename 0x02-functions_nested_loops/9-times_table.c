#include "holberton.h"
/**
 * times_table - Show time tables
 *
 * Return: None
 */
void times_table(void)
{
	int i, j, res, sig;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{



			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}

				_putchar(res + 48);
			if (j != 57)
			{
				_putchar(',');


				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
