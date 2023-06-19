#include <stdio.h>
/**
 * main - Entry point
 * A program that prints all possible different combinations
 * of three digits
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int m, n;

	for (m = 0; m <= 98; m++)
	{
		for (n = m + 1; n <= 99; n++)
		{
			putchar('0' + (m / 10));
			putchar('0' + (m % 10));

			putchar(' ');

			putchar('0' + (n / 10));
			putchar('0' + (n % 10));

		if (m != 98 || n != 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}
