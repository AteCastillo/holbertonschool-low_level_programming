#include "lists.h"

/**
 * add_nodeint - check the code for Holberton School students.
 * @head: pointer to pointer to the list's head
 * @n: interger received
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newhead;

	if (head == NULL)
		return (0);

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
		return (NULL);


	newhead->n = n;
	newhead->next =	*head;
	*head = newhead;
	return (newhead);
}
