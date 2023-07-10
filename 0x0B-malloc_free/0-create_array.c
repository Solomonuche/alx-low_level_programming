#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates and
 * array of chars, and initalizes it with a specific char
 * @size: array size
 * @c: specific char
 *
 * Return: (c)
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (0);

	s = (char *) malloc(size * sizeof(char));

	if (s != 0)
	{
		for (i = 0; i < size; i++)
			s[i] = c;
	}

	return (s);
	free(s);
}
