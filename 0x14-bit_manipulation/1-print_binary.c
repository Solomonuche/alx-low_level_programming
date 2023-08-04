#include <stdio.h>
#include "main.h"

/**
 * print_binary -  a function that prints the binary
 * representation of a number
 * @n: integer
 *
 * Return: (nothing)
 */

void print_binary(unsigned long int n)
{
	int mask = 1;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & mask) + '0');
}
