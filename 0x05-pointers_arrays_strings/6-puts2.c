#include "main.h"

/**
 * puts2 - a function that prints a string, followed by a new line, to stdout
 * @str: pionter varaible
 *
 * Return: (0) success
 */

void puts2(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
