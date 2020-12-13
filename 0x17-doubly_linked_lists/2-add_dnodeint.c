#include "lists.h"
/**
 * add_dnodeint - to add node at the beginning
 * @head: doble pointer
 * @n: constant rececived
 * Return: int.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newhead = NULL;

	if (head == NULL)
		return (0);

	newhead = malloc(sizeof(dlistint_t));
	if (newhead == NULL)
		return (NULL);


	newhead->n = n;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
