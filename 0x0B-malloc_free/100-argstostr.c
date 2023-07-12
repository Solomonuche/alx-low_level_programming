#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenantes all the argument of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: (ptr)
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *ptr;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	ptr = (char *) malloc((len + 1) * sizeof(char));

	if (ptr != NULL)
	{
		k = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				ptr[k] = av[i][j];
			}
			ptr[k] = '\n';
			k++;
		}

	}
	ptr[k] = '\0';
	return (ptr);
}
