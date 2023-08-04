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
	int i, bitmask;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n == 1)
	{
		putchar('1');
		return;
	}
	for (i = 31; i >= 0; i--)
	{

		bitmask = (1 << i);

		if (n & bitmask)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}
