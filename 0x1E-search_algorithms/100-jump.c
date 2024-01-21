#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value is the value to search for
 *
 * Return: index of the value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, mid = sqrt(size);

	if (array == NULL)
		return (-1);

	while (start < size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);

		if (value <= array[mid])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", start, mid);
			for (i = start; i <= mid; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
		else if ((start + sqrt(size)) > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", start, mid);
			for (i = start; i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			}

			return (-1);
		}

		start = mid;
		mid = mid + sqrt(size);
	}

	/** Value not found in the array, loop to the end of the loop */

	return (-1);
}
