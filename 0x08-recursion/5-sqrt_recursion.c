#include "holberton.h"

/**
 *_sqrt_recursion - square root
 * @n: Var received
 * Return: different
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (function(n, 1));
}

/**
 * function - to multiply
 * @n: number
 * @i: multiplo
 * Return: -1;
 */

int function(int n, int i)
{
	if (n == (i * i))
	{
		return (i);
	}
	else if (n > (i * i))
	{
		return (function(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
