#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * This function call the if and else function to print out string based on specific conditions
 *
 * Return: Always (0) Sucess
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}

	return (0);
}
