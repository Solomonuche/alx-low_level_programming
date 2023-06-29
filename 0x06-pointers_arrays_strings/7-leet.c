#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: input string
 *
 * Return: (str)
 */

char *leet(char *str)
{
	int i, j;
	char leetcharacter[] = "aAeEoOtTlL";
	char replacement[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetcharacter[j] != '\0'; j++)
		{
			if (str[i] == leetcharacter[j])
			{
				str[i] = replacement[j];
				break;
			}
		}
	}

	return (str);
}
