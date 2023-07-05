#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string, in reverse
 * @s: input string
 *
 * Return: (s)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_puts_recursion(s + 1);
	_putchar(*s);
}
