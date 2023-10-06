#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *current;
	unsigned long int index = 0;

	if (key == NULL || ht == NULL || value == NULL || !ht->size || !ht->array)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	/** Check if the key exists in the linked list at the given index*/
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}

	/** Key doesn't exist, create a new node and insert it at the beginning */


	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);

}
