#include "main.h"

/**
 * _strncpy - a function that copies a strings
 * @dest: destination string
 * @src: source string
 * @n: max length
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
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
		dest[i] = src[i];
	}

	return (dest);
}
