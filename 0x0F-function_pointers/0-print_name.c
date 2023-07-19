#include "function_pointers.h"
#include <stdio.h>


/**
 * printname - a helper function that prints a name
 * @name: string to printed
 *
 * Return: (nothing)
 */

void printname(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name - a function that prints a name
 * @name: string to printed
 * @f: function pointer
 *
 * Return: (nothing)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

