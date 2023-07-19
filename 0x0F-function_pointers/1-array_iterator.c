#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: array element
 * @action: pointer function
 * 
 * Return: (nothing)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (int i = 0; i < size; i++)
			action(array[i]);
	}
}
