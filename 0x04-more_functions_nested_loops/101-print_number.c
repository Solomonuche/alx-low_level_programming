#include "main.h"

/**
 * print_number - a function that prints integer using putchar function
 * @n: input parameter
 *
 * Return: (0) success
 */

void print_number(int n)
{
	/* for 0 integer */

	if (n == 0)
	{
		_putchar('0');
	}

	/* for integer greater than zero */

	if (n > 0 || n < 0)
	{
		int reserve = 0;

		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		while (n > 0)
		{
			reserve = (reserve * 10) + (n % 10);
			n = n / 10;
		}

		while (reserve > 0)
		{
			_putchar('0' + (reserve % 10));
			reserve = reserve / 10;
		}
	}
}
