#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * @b: string pointer containing 0 & 1
 *
 * Return: (int value or 0)
 */

unsigned int binary_to_uint(const char *b)
{
	int result = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{

		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			result *= 2;
			result += b[i] - '0';

		}
	}
	return (result);
}
