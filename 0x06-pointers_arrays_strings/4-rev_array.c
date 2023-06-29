#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @n: number of elemets of the array
 *
 * Return: (0) success
 */

void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
		
}
