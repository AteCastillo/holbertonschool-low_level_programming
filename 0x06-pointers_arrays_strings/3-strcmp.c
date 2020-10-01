#include "holberton.h"


/**
 * _strcmp - compares two strings
 * @s1: var received
 * @s2: var received
 * Return: Always 0.
 */


int _strcmp(char *s1, char *s2)

{
	int n;

	for (n = 0; (s1[n] != '\0' && s2[n] != '\0') && *s1 == *s2 ;  n++)
	{
	}
	if(*s1 == *s2)
	     {
		     return 0;
	     }
	     else
	     {
		     return (*s1 - *s2);
	     }


}
