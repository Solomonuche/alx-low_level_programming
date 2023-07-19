#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: array element
 * @action: pointer function
 * @size: size of the array
 *
 * Return: (nothing)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL || action != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
	exit(1);
}
