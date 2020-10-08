#include "holberton.h"

/**
 *_sqrt_recursion - blank
 * @n: blank
 * Return: balnk
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
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
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (function(n, i + 1));
	else
		return (-1);
}

/*
 *#include "holberton.h"
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: var received
 * Return: Always 0.
 *


int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (function(n, 1));

}

 *
 * function - square root of a number
 * @n: result
 * @i: multiplos
 * Return: -1
 *

int function(int i, int n)

{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	else
		return (function(n, i + 1));
}
*/
