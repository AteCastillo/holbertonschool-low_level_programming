#include "hash_tables.h"

/**
  *hash_table_print - print the hash table
  *@ht: Hash table
  *Return: Nothing.
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;
	int flag = 0;

	/* if hash table exists */
	if (ht)
	{
		/* first print { */
		printf("{");
		/* go through array to print */
		for (; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				aux = ht->array[i];
				while (aux != NULL)
				{
					/* raise a flag for the first element printed*/
					/* so print the comma after the first element*/
					if (flag == 1)
						printf(", ");
					printf("\'%s\': \'%s\'", aux->key, aux->value);
					aux = aux->next;
				}
				/* flag starts in cero, after the first round in*/
				/* the while it will be 1, so it prints the comma*/
				/* after the first element, and it will be keep on*/
				/* printing it along with the next element up to*/
				/* the end, therefor the last element has no comma bec*/
				/* it goes first */
				flag = 1;
			}
		}
		printf("}\n");
	}
}
