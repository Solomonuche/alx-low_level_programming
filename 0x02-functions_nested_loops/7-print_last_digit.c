#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *@n: parameter to be checked
 *
 * Return: (0) success
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = -(n) % 10;
	}
	else
	{
		m = n % 10;
	}
	_putchar('0' + m);

	return (m);
}
