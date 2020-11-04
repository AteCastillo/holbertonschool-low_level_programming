#include "lists.h"

/**
 * get_nodeint_at_index - check the code for Holberton School students.
 * @head: pointer to pointer
 * @index: unsigned int received
 * Return: an interger.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *auxiliar = head;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		auxiliar = head->next;
		i++;
		if (auxiliar == NULL)
			return (NULL);
	}
	return (auxiliar);
}
