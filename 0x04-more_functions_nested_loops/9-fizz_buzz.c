#include <stdio.h>

/**
 * main - entry point
 *
 * Return: (0) success
 */

int main(void)
{

	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c > 1)
		{
			printf(" ");
		}
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", c);
		}
	}
	printf("\n");
	return (0);
}
