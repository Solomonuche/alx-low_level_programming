#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: (1 or 0)
 */

int get_endianness(void)
{
	unsigned int number = 1;
	char *ptr = (char *) &number;

	if (ptr[0] == 1)
		return (1);
	else
		return (0);
}
