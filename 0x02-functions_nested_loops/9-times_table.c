#include "main.h"

/**
 * times_table - a function that prints the 9 times table starting from 0
 *
 * Return: (0) success
 */

void times_table(void)
{
	int m, n, res;

	for (m = 0; m <= 9; m++)
	{

		_putchar(48);
		for (n = 1; n <= 9; n++)
		{
			res = m * n;
			_putchar(44);
			_putchar(32);
			if (res <= 9)
			{
				_putchar(32);
				_putchar(res + 48);
			}
			else
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
