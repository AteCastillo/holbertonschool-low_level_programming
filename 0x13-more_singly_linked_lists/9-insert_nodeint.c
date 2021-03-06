#include "lists.h"

/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 * @head: pointer to pointer
 * @idx: index
 * @n: content of nodes
 * Return: an interger.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *auxiliar = *head;
	listint_t *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (*head == NULL || idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (i < idx - 1)
	{
		if (auxiliar->next == NULL)
		{
			return (NULL);
		}
		auxiliar = auxiliar->next;
		i++;
	}
	if (!auxiliar)
		return (NULL);
	newnode->next = auxiliar->next;
	auxiliar->next = newnode;
	return (newnode);

}
