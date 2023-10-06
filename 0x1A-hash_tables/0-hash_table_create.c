#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the array
 *
 * Return: (a pointer to the hash table) on success
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = malloc(sizeof(*ht));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
