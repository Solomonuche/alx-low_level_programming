#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * followed by a new line.
 * @s: pionter varaible
 *
 * Return: (0) success
 */

void rev_string(char *s)
{
	int length = 0;
	char temp;
	int i;

	/*Get the length of the string*/

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
