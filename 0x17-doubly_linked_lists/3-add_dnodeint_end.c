#include "lists.h"
/**
 * add_dnodeint_end - to add node at the end
 * @head: doble pointer
 * @n: constant rececived
 * Return: int.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	newnode->n = n;
	newnode->prev = tmp;
	newnode->next = NULL;
	tmp->next = newnode;
	return (newnode);

}
