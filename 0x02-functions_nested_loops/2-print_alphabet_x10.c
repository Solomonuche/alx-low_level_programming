#include "main.h"
/**
 * print_alphabet_x10 - print alphabet X10
 * Write a function that prints 10X the alphabet, in lowercase
 * followed by a new line.
 *
 * Return: Always (0) Success
 */

void print_alphabet_x10(void)
{
	char a, i;


	for (i = 0; i < 10; i++)
	{
	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	}
}
