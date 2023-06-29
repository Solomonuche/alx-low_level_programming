#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;

	/* get the length of destination string */
	for (i = 0; dest[i] != '\0'; i++)
	{
		len1++;
	}

	/* get the length of source string */
	for (j = 0; src[j] != '\0'; j++)
	{
		len2++;
	}

	/* concatenation */
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
