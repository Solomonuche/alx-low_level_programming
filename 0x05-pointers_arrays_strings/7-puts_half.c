#include "main.h"

/**
 * puts_half - a function that prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
	int length = 0;
	int startindex;

	while (str[length] != '\0')
	{
		length++;
	}

	startindex = (length - 1) / 2 + 1;

	while (str[startindex] != '\0')
	{
		_putchar(str[startindex]);
		startindex++;
	}

	_putchar('\n');
}
