#include "lists.h"

/**
 * add_nodeint_end - check the code for Holberton School students.
 * @head: pointer received
 * @n: int received
 * Return: an interger.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newtail;
	listint_t *auxiliar = *head; /*for the head */

	newtail = malloc(sizeof(listint_t));

	if (newtail == NULL)
		return (NULL);

	newtail->n = n;
	newtail->next = NULL;

	if (*head == NULL)
	{
		*head = newtail;
		return (newtail);
	}

	while (auxiliar->next)
	{
		auxiliar = auxiliar->next;
	}
	auxiliar->next = newtail;

	return (newtail);
}
