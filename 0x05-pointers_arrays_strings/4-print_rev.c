#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: pionter varaible
 *
 * Return: (0) success
 */

void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
