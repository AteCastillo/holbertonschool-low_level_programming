#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node
 * @h: doble pointer received
 * @n: int received
 * @idx: int received
 * Return: node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL;
	unsigned int i;
	dlistint_t *tmp = *h, *prev = NULL;

	if (h == NULL)
		return (NULL);
	if (idx > dlistint_len(*h))
		return (NULL);
	if (*h == NULL || idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}
	if (idx == dlistint_len(*h))
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	for (i = 0; i < idx; i++)
		tmp = tmp->next;
	newnode->n = n;
	prev = tmp->prev;
	newnode->next = tmp;
	newnode->prev = prev;
	prev->next = newnode;
	tmp->prev = newnode;
	return (newnode);
}
/**
 * dlistint_len - to returns the number of elements in a linked list
 * @h: constant rececived
 * Return: int.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
