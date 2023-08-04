#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that set the value of a bit to 1 at a given index
 * @n: integer
 * @index: index
 *
 * Return: (1 or -1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index < (sizeof(unsigned int) * 8))
	{
		mask = 1 << index;
		*n &= ~mask;
		return (1);
	}
	else
		return (-1);
}
