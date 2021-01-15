#include "hash_tables.h"

/**
  *hash_table_set - adds an element to the hash table.
  *@ht: hash table.
  *@key: key.
  *@value: value of key
  *Return: 0 on successs, 1 otherwise.
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *aux = NULL;

	/* to check NULL and an empty string *key[0] == '\0' also works*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	/* cast key to conts unsigned char. This comes from funtion in file 2*/
	index = key_index((const unsigned char *)key, ht->size);
	/* aux is assigned the head of the list */
	aux = ht->array[index];
	/* go through the list */
	while (aux)
	{
		/* if a key is repeated it has to be replaced with the new*/
		if (strcmp(key, aux->key) == 0)
		{
			/*first delete value to assigne a new one */
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	/* assigning copies of key and value to new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	/* now new node has to be head */
	ht->array[index] = new_node;
	return (1);
}
