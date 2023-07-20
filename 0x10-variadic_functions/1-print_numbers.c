#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - a function that prints numbers,
 * followed by a new line
 * @n: number of integer passed
 * @separator: integer seperator
 *
 * Return: (nothing)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (separator == NULL)
		exit(0);
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{	printf("%d", va_arg(numbers, unsigned int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
