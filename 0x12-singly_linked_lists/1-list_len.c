#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: pointer received
 * Return: Always 0.
 */


size_t list_len(const list_t *h)
{

	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{

		count++;
		h = h->next;
	}
	return (count);

}
