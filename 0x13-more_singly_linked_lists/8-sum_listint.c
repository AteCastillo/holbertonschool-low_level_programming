#include "lists.h"

/**
 * sum_listint - check the code for Holberton School students.
 * @head: pointer to pointer
 * Return: Always 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;


	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;

	}
	return (sum);
}
