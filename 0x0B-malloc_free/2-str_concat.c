#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenantes two strings
 * @s1: destination string
 * @s2: source string
 *
 * Return: (s1)
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	int totalLen = 0;
	char *ptr;

	if (s1 == 0 || s2 == 0)
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	totalLen = len1 + len2;

	ptr = (char *) malloc((totalLen + 1) * sizeof(char));
	if (ptr != 0)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			ptr[len1 + i] = s2[i];
		ptr[totalLen] = '\0';
	}

	return (ptr);

}
