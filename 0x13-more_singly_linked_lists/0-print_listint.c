#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 * @h: pointer to head of the list
 * Return: Unsigned int.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
