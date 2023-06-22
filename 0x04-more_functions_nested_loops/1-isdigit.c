#include "main.h"

/**
 * _isdigit - checks for a digit btw 0 - 9
 * @c: character to be checked
 *
 * Return: (0) success
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
