#include "main.h"
/**
 * _islower - checks lowercase character
 * @c: The character to be checked
 * Returns 1 if 'c' is lowercase
 * Returns 0 otherwise
 *
 * Return: Always (0) Success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
