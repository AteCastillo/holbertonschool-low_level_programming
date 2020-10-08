#include "holberton.h"

/**
 * is_prime_number - check the code for Holberton School students.
 * @n: var received.
 * Return: Always 0.
 */

int is_prime_number(int n)

{

  if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (function(n, 1));
}

/**
 * function - blank
 * @n: number
 * @i: incrementor
 * Return: -1;
 */

int function(int n, int i)
{

  if(i %2 != 0 && i %3 != 0 && i %5 != 0 && i %7 != 0 || i == 2 || i == 3 || i == 5 || i == 7)
		return (function(n, i + 1));
	else
		return (0);
}





