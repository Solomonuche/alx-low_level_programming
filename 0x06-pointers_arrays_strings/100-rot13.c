#include "main.h"

/**
 * rot13 - a function that encodes a tring using Rot13
 * @s: input string
 *
 * Return: (str)
 */

char *rot13(char *s)
{
	char let1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char let2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; let1[j] != '\0'; j++)
		{
			if (s[i] == let1[j])
			{
				s[i] = let2[j];
				break;
			}
		}
	}
	return (s);
}
