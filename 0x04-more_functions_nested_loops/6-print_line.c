#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of times
 * followed by a new line
 *
 * Return: (0) success
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
