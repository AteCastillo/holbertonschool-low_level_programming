#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 * @head: pointer to pointer
 * Return: an interger.
 */

int pop_listint(listint_t **head)
{
	listint_t *auxiliar = *head;
	int n;

	if (*head == NULL)
		return (0);

	n = auxiliar->n;
	*head = auxiliar->next;
	free(auxiliar);
	return (n);
}
