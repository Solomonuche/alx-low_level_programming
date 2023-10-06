#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @size: the size of the arra
 * @key: the keyy
 *
 * Return: (key index) on success
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code, index;

	hash_code = hash_djb2(key);
	index = hash_code % size;

	return (index);
}
