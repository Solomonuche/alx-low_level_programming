#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: string two
 * @n: number of s2 to be copied
 *
 * Return: (pointer or NULL)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int len1 = 0;
	int totalLen = 0;
	char *ptr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	totalLen = len1 + n;

	ptr = malloc((totalLen + 1) * sizeof(ptr));
	if (ptr != 0)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; i <= n; i++)
			ptr[len1 + i] = s2[i];
		ptr[totalLen] = '\0';
	}

	return (ptr);

}
