#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that set the value of a bit to 1 at a given index
 * @n: integer
 * @m: index
 *
 * Return: (1 or -1)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		result = result & (result - 1);
		count++;
	}

	return (count);
}
