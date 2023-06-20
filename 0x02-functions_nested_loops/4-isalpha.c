#include "main.h"
/**
 * _isalpha - checks lowercase character
 * @c: The character to be checked
 * Returns 1 if 'c' is lowercase or uppercase
 * Returns 0 otherwise
 *
 * Return: Always (0) Success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
