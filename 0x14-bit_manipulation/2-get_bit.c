#include <stdio.h>
#include "main.h"
/**
 * get_bit -  a function that returns the value of a bit at a given index
 * @n: integer
 * @index: index
 *
 * Return: (nothing)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask;

	if (index < (sizeof(unsigned int) * 8))
	{
		bitmask = 1 << index;
		return ((n & bitmask) ? 1 : 0);
	}
	else
		return (-1);
}
