#include "lists.h"
/**
 * add_dnodeint - to add node at the beginning
 * @head: doble pointer
 * @n: constant rececived
 * Return: int.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = NULL;

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
	tmp = *head;
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = tmp;
	*head = newnode;
	return (newnode);
}
