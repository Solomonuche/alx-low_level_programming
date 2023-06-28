#include "main.h"

/**
 * _atoi - a function that convert string to an integer
 * @s: input pointer
 *
 * Return: (0) success
 */

int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int holder = 0;
	int result = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	else if (s[0] == '+')
	{
		i = 1;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			holder = holder * 10 + (s[i] - '0');
		}
	}
	result = sign * holder;

	return (result);
}
