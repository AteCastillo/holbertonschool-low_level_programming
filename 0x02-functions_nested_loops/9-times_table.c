#include "holberton.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: None.
 */

void times_table(void)

{


	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
