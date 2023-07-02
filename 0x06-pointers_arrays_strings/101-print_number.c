#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: n number of integer
 *
 * Return: (n)
 */

void print_number(int n)
{
	int res = 0;
	int i;

	if (n >= 0 && n <= 9)
	{
		_putchar('0' + n);
	}
	else if (n >= 10 || n < 0)
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');

		}
		for (i = 0; n > 0; i++)
		{
			res = (res * 10) + (n % 10);
			n = n / 10;
		}    
		for (i = 0; res > 0; i++)
		{
			_putchar('0' + (res % 10));
			res = res / 10;
		}
	}

}
