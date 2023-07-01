#include "main.h"

/**
 * rot13 - a function that encodes a tring using Rot13
 * @str: input string
 * 
 * Return: (str)
 */

char *rot13(char *s)
{
	int i;
	char *p = s;

	for (i = 0; p[i] != '\0'; i++)
	{

		if ((p[i] >= 'A' && p[i] <= 'M') || (p[i] >= 'a' && p[i] <= 'm'))
		{
			p[i] = p[i] + 13;
		}
		else if ((p[i] >= 'N' && p[i] <= 'Z') || (p[i] >= 'n' && p[i] <= 'z'))
		{
			p[i] = p[i] - 13;
		}
		else
		{
			p[i] = p[i];
		}

	}
	p[i] = '\0';

	return (s);
}
