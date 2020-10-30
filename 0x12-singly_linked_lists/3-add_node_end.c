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

	newtail = malloc(sizeof(list_t));
	if (newtail == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(newtail);
		return (0);
	newtail->str = strdup(str);

	for (count = 0; str[count] != '\0'; str++)
	{
	}
	newtail->len = count;
	if (*head == NULL)
	{
		*head = newtail;
		return (newtail);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newtail;
	return (newtail);
}
