#include <stdio.h>
/**
 * main -Entry point
 * A program that prints all possible cmbination of two digits
 *
 * Return: Always (0) Sucess
 */

int main(void)
{
	int m, n;

	for (m = 0; m <= 8; m++)
	{
		for (n = m + 1; n <= 9; n++)
		{
			putchar('0' + m);
			putchar('0' + n);

			if (m != 8 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
