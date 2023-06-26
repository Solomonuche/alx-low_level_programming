#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: pionter varaible
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

	for (i = length - 1; i >=0; i--)
		_putchar(s[i]);

	_putchar('\n');
		
}
