#include "lists.h"

/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 * @head: pointer to pointer
 * @index: index
 * Return: an interger.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i, nodes = 0;
	listint_t *temp, *tempo;

	if (*head == NULL)
		return (-1);

	*temp = *head;

	while (temp)
	{
		i++ /* to see if nodes are > or < than index*/
		temp = temp->next;
	}
	if (index > i)
		return (-1);
	*temp = *head;

	for(i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	tempo = temp->next;
	temp->next = tempo->next;
	free(tempo);
	return (1);
}
