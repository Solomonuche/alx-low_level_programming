#include "main.h"

/**
 * print_square - a function that prints a square in the terminal
 * @size: size of square
 * followed by a new line
 *
 * Return: (0) success
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
