#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * a program that prints single digit of base 10
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
	putchar('0' + n);
	n++;
	}
	putchar('\n');

	return (0);
}
