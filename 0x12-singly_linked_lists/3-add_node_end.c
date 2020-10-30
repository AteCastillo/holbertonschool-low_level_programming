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
	list_t *last = *head;

	if (head == NULL)
		return (0);

	newtail = malloc(sizeof(list_t));

	if (newtail == NULL)
		return (NULL);

	newtail->str = strdup(str);
	newtail->next = NULL;

	if (*head == NULL)
	{
		*head = newtail;
		return (newtail);
	}

	for (count = 0; str[count] != '\0'; str++)
	{
	}

	while (last->next != '\0')
	{
		last = last->next;
	}
	last->next = newtail;

	newtail->len = count;
	return (newtail);
}
