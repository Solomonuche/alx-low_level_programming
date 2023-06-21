#include "main.h"

/**
 * times_table - a function that prints the 9 times table starting from 0
 *
 * Return: (0) success
 */

void times_table(void)
{
	int m, n, result;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			result = m * n;

			if (result < 10)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			if (n != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
