#include "main.h"

/**
 * swap_int - a function that swaps the value of two integer
 * @a: pionter varaible
 * @b: pionter varaible
 *
 * Return: (0) success
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
