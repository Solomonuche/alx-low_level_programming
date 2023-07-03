#include "main.h"
#define NULL 0
/**
 * _strchr - a function that locates a character in a string
 * @s: input string
 * @c: character sequence
 *
 * Return: (s)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

		return (NULL);
}
