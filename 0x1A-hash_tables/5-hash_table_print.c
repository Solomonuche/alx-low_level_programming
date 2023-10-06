#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int index = 0;
	int printed = 0;

	if (!ht)
		exit(1);

	putchar('{');
	for (; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			tmp = ht->array[index];

			while (tmp != NULL)
			{
				if (printed)
				{
					printf(", ");
				}
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				printed = 1;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
