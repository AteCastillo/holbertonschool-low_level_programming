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

	if (*h == NULL || idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}

	for (i = 0; i < idx; i++)
		tmp = tmp->next;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (newnode != NULL)
	{
		newnode->n = n;
		prev = tmp->prev;
		newnode->next = tmp;
		newnode->prev = prev;
		prev->next = newnode;
		tmp->prev = newnode;
		return (newnode);
	}
	else if (i == idx)
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}
	return (NULL);
}
