#include "lists.h"

/**
 * print_dlistint - to print elements in the list
 * @h: constant rececived
 * Return: int.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
