#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line in the terminal
 * @n: number of times
 * followed by a new line
 *
 * Return: (0) success
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
