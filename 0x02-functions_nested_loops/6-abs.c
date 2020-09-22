#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @nu: int recived
 * Return: the absolute value
 */

int _abs(int nu)

{

	return (nu * ((nu > 0) - (nu < 0)));
}
