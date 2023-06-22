#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9,
 * Do not print 2 and 3 followed by a new line
 *
 * Return: (0) success
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
		{
			_putchar('0' + c);
		}

		c++;
	}
	_putchar('\n');

}
