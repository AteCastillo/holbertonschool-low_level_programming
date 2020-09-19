#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{

	int ch, nu, tri;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		for (nu = '0' ; nu <= '9' ; nu++)
		{
			for (tri = '0' ; tri <= '9' ; tri++)
			{
				if (ch == nu || ch > nu)
				{
					continue;
				}
				if (nu == tri || tri > nu)
				{
					continue;
				}
				putchar(ch);
				putchar(nu);
				putchar(tri);
				if (ch != '7' || nu != '8' || tri != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
