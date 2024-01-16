#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value is the value to search for
 *
 * Return: index of the value or null
 */

int binary_search(int *array, size_t size, int value)
{
	int i;
	int start = 0, end = size - 1;
	int mid = (start + end) / 2;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);

		}
		printf("%d\n", array[i]);

		if (value < array[mid])
		{
			end = mid - 1;
		}
		else if (value > array[mid])
		{
			start = mid + 1;
		}
		else
		{
			return (mid);
		}
		mid = (start + end) / 2;

	}

	return (-1);
}
