#include "lists.h"

/**
 * free_listint2 - check the code for Holberton School students.
 * @head: pointer to pointer
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *new; /*temp to hold what is inside head */

	if (*head == NULL)
		free(*head);
		return;

	while (*head)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}

	*head = NULL;
}
