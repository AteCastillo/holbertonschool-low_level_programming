#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{

	int ch, nu;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		for (nu = '0' ; nu <= '9' ; nu++)
		{
			if (ch == nu || ch > nu)
			{
				continue;
			}
			putchar(ch);
			putchar(nu);
			if (ch != '8' || nu != '9')
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
