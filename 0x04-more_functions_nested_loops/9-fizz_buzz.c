#include "holberton.h"
#include <stdio.h>
/**
 * main -  The entry point
 * Return: Always 0
 */

int main(void)
{

	int nu;

	for (nu = 1; nu <= 100 ; nu++)
		if (nu % 3 == 0 && nu % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (nu % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (nu % 5 == 0)
		{
			if (nu == 100)
				printf("Buzz");
				else
					printf("Buzz ");
		}
		else
		{
		printf("%d ", nu);
		}
	printf("\n");
	return (0);
}
