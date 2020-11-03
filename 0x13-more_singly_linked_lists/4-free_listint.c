#include "lists.h"

/**
 * free_listint - check the code for Holberton School students.
 * @head: pointer received
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *auxiliar;

	while (head)
	{
		auxiliar = head->next;
		free(head);
		head = auxiliar;
	}

}
