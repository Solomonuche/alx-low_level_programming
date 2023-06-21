#include <stdio.h>

/**
 * main - entry point
 * a program that prints the first 50 fibonacci numbers starting from 1 and 2
 * followed by a new line
 *
 * Return: (0) success
 */

int main(void)
{
	int count;

	long int num1, num2, next;

	count = 3;
	num1 = 1;
	num2 = 2;

	printf("%lu, %lu, ", num1, num2);

	while (count <= 50)
	{
		next = num1 + num2;
		printf("%lu, ", next);

		if (count == 50)
		{
			printf("%lu", next);
		}

		num1 = num2;
		num2 = next;

		count++;
	}
	printf("\n");

	return (0);
}
