#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of argument passed
 *
 * Return: (int)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		result += va_arg(list, unsigned int);
	return (result);
}
