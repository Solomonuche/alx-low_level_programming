#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that alloctaes memory using malloc
 * @b: size of memeory to be allocated
 *
 * Return: (0)
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	return (i);
}
