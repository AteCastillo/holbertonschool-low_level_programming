#include "lists.h"

/**
 * free_dlistint - to free head
 * @head: poointer received
 * Return: none.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return;
	while (head->prev)
	{
		head = head->prev;
	}

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
