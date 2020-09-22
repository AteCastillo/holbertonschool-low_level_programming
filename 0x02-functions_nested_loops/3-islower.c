#include "holberton.h"

/*
 * _islower - to test if a character is lowercase
 * @c: the character received
 * Return: Always 0 (Success)
 */

int _islower(int c)

{


	if (c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
