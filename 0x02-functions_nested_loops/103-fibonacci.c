#include <stdio.h>

/**
 * main - entry point
 * a program that finds and prints the sum of the even valued fibonacci term
 * followed by a new line
 *
 * Return: (0) success
 */

int main(void)
{
	long int sum, limit;

	long int num1, num2, next;

	num1 = 1;
	num2 = 2;
	sum = num2;
	limit = 4000000;

	next = num1 + num2;

	while (next <= limit)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}

		num1 = num2;
		num2 = next;

		next = num1 + num2;
	}
	printf("%lu", sum);
	printf("\n");

	return (0);
}
