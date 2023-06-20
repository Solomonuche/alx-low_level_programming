#include "main.h"
/**
 * main - Entry point
 * Write a function that prints the alphabet, in lowercase
 * followed by a new line.
 *
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 *
 * Return: Always (0) Success
 */

void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
