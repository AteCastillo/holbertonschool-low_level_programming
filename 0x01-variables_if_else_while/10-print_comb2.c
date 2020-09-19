#include <stdio.h>
/**
 * main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char ch, nu;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		for (nu = '0' ; nu <= '9' ; nu++)
	{
		putchar(ch);
		putchar(nu);
			if (ch != '9' || nu != '9')
			{
				putchar(',');
				putchar(' ');
			}
	}
	}
	putchar('\n');
	return (0);
}
