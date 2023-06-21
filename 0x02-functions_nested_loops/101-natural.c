#include <stdio.h>

/**
 * main - a funxtion that prints natural numbers below 1024 that are
 * multiplies of 5 or 3
 *
 * Return: Always (0) success
 */
int main(void)
{
	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
