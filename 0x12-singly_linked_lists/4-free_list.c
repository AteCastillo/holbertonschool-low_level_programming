#include "lists.h"

/**
 * add_node - check the code for Holberton School students.
 * @head: pointer to pointer
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *new = head;

	while (new)
	{

		free (new->str);
		free (new);
		new = next;
	}
}
