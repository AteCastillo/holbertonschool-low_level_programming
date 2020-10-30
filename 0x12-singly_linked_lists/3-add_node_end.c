#include "lists.h"

/**
 * add_node_end - check the code for Holberton School students.
 * @head: pointer to pointer
 * @str: char received
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newtail;
	int count;
	list_t *last;

	newtail = malloc(sizeof(list_t));
	if (newtail == NULL)
		return (NULL);

	newtail->str = strdup(str);

	for (count = 0; str[count] != '\0'; str++)
	{
	}
	last = NULL;
	newtail->len = count;
	newtail->next = NULL;

	if (*head == NULL)
	{
		*head = newtail;
	}
	else
	{
		last = *head;
		while (last->next != '\0')
		{
			last = last->next;
		}
		last->next = newtail;
	}

	return (*head);
}
