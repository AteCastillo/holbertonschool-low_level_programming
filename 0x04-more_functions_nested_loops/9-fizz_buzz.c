#include "holberton.h"
#include <stdio.h>

/**
 * Write a program that prints the numbers from 1 to 100,
 * followed by a new line
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
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
		else if (nu == 100)
		{
			printf("Buzz");

		else if (nu % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", nu);
		}
	printf("\n");
	return (0);
}
