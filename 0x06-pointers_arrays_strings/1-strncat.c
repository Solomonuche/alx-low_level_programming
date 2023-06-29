#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: max length
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = 0;

	/* get the length of destination string */
	for (i = 0; dest[i] != '\0'; i++)
	{
		len1++;
	}

	/* concatenation */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
