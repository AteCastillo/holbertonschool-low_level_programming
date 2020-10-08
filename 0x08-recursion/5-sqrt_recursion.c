#include "holberton.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: var received
 * Return: Always 0.
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (function(n, 1));

}

 /**
 * function - find the sqrt of a number
 * @x: result
 * @i: base
 * Return: the base of a sqrt
 */

int function(int i, int x)
{
	if (i * i == x)
		return (i);
	if (i * i > x)
		return (-1);
	else
		return (funtion(x, i + 1));
}

}
