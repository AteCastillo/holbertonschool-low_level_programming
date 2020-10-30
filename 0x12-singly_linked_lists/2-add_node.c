#include "lists.h"

/**
 * add_node - check the code for Holberton School students.
 * @str: char received
 * @head: pointer to pointer
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;
	int count;

	newhead = malloc(sizeof(list_t));

	if (newhead == NULL)
		return (NULL);

	for (count = 0; str[count] != '\0'; count++)
	{
	}

	newhead->str = strdup(str);
	newhead->len = count;
	newhead->next = *head;
	*head = newhead;

	return (newhead);
}
