#include "holberton.h"


/**
 * is_palindrome - check the code for Holberton School students.
 * @s: var received
 * Return: Always 0.
 */


int is_palindrome(char *s)

{

	int inicio = 0;
	int fin = lenght(s);

	return (roberto(s, inicio, fin - 1));

}

/**
 * lenght - check the code for Holberton School students.
 * @s: var received
 * Return: Always 0.
 */

int lenght(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + lenght(s + 1));
}


int roberto(char *str, int inicio, int fin)
{

	if (inicio < fin && str[inicio] == str[fin])
                return (roberto(str, inicio + 1, fin - 1));

	if (inicio >= fin)
		return (1);

	return (0);
}
