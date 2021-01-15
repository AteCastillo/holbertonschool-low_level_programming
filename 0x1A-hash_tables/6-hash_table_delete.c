#include "hash_tables.h"

/**
  *hash_table_delete - delete nodes and list
  *@ht: Hash table
  *Return: Nothing.
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL, *tmp = NULL;
	unsigned long int i = 0;

	/* to go trough the array */
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			/* assign head to aux */
			aux = ht->array[i];
			while (aux)
			{
				/* use tmp to not lose the reference and free tmp */
				tmp = aux;
				aux = aux->next;
				/* free every key value temp and node */
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}
	/* free array and struct */
	free(ht->array);
	free(ht);
}
