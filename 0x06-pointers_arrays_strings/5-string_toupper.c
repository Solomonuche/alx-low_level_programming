#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase letters of a string to uppercase
 *
 * Return: (0) successs
 */

char *string_toupper(char *str)
{
	int i;

	for (i =0; str[i] != '\0'; i++)
	{
		if ( str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
