#include "hash_tables.h"

/**
 * hash_table_delete - a function that prints a hash table
 * @ht: the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *next;
	unsigned long int index = 0;

	if (!ht)
		exit(1);

	for (; index < ht->size; index++)
	{
		tmp = ht->array[index];

		while (tmp != NULL)
		{
			next = tmp->next;

			free(tmp->key);
			free(tmp->value);
			free(tmp);

			tmp = next;
		}
	}
	free(ht->array);
	free(ht);
}
