#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hourL, hourR, minL, minR; /* l=left r=right */

	for (hourL = '0'; hourL <= '2'; hourL++)
	{
		for (hourR = '0'; hourR <= '9'; hourR++)
		{
			if (hourL == '2' && hourR == '4')
				break;
			for (minL = '0'; minL <= '5'; minL++)
			{
				for (minR = '0'; minR <= '9'; minR++)
				{
					_putchar(hourL);
					_putchar(hourR);
					_putchar(':');
					_putchar(minL);
					_putchar(minR);
					_putchar('\n');
				}
			}
		}
	}
}
