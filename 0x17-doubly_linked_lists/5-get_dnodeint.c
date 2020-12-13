#include "lists.h"

/**
 * get_dnodeint_at_index - retunr the nth node
 * @head: pointer received
 * @index: int received
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int i; /*to check the number of node I'm in */

	if (head == NULL)
		return (NULL);

	if (head->prev != NULL)
	{
		while (head->prev)
			head = head->prev;
	}
	tmp = head;

	for (i = 0; i < index; i++)
	{
		if (tmp->next != NULL)
			tmp = tmp->next;
		else
			return (NULL);
	}
	return (tmp);
}
