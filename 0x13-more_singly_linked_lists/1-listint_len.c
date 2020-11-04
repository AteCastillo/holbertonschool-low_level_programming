#include "lists.h"

/**
 * listint_len - check the code for Holberton School students.
 * @h: pointer to the head's list
 * Return: an unsined int.
 */

size_t listint_len(const listint_t *h)
{
	int count; /* to count the number of elements in the list */

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
