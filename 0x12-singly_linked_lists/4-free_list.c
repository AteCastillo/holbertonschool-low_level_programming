#include "lists.h"

/**
 * add_node - check the code for Holberton School students.
 * @head: pointer to pointer
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *new; /*temp to hold what is inside head */

	while (head)
	{
		new = head->next;
		free (head->str);
		free (head);
		head = new;
	}

}
