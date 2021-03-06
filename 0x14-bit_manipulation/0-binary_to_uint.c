#include "holberton.h"

/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: constant reveived
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, base = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++) /* to get the lenght of the string */
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
	}
	i--; /* because i is stand in null, so it rests 1 to be in lastdig */
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += base;
		}
		base *= 2;
	}
	return (sum);
}
