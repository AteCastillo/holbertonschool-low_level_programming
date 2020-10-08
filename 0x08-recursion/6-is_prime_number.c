#include "holberton.h"

/**
 * is_prime_number - check the code for Holberton School students.
 * @n: var received.
 * Return: Always 0.
 */

int is_prime_number(int n)

{
	if (n <= 1)
		return (0);
	else
		return (function(n, n - 1));
}

/**
 * function - prime
 * @n: number
 * @b: incrementor
 * Return: -1;
 */

int function(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0)
		return (function(n, b - 1));
}

/*
* if(i %2 != 0 && i %3 != 0 && i %5 != 0 && i %7 != 0 || i == 2 || i == 3
* || i == 5 || i == 7)
*			return (function(n, i + 1));
*	else
*		return (0);
*/
