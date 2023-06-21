#include "main.h"

/**
 * times_table - a function that prints the 9 times table starting from 0
 *
 * Return: (0) success
 */

void print_times_table(int n)
{
	int m, i, res;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (m = 0; m <= n; m++)
	{

		_putchar(48);
		for (i = 1; i <= n; i++)
		{
			res = m * i;
			_putchar(44);
			_putchar(32);
			if (res <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(res + 48);
			}
			else if (res <= 99)
			{
				_putchar(32);
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
			else
			{
				_putchar(((res / 100) % 10) + 48);
				_putchar(((res / 10) % 10) + 48);
				_putchar((res % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
