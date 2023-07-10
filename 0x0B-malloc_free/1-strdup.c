#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that that returns a pointer
 * whihc contains a copy of a given string
 * @str: string
 *
 * Return: (ptr)
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *ptr;

	if (str != 0)
	{
		for (i = 0; str[i] != '\0'; i++)
			len++;
	}

	ptr = (char *) malloc((len + 1) * sizeof(char));

	if (str == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < len; i++)
			ptr[i] = str[i];
		ptr[len] = '\0';
	}

	return (ptr);
}
