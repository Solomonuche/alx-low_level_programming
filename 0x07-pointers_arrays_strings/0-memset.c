#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer string
 * @n: number of memory
 * @b: constant byte
 *
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s++ = b;
	}

	return (s);
}
