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
	int num;

	num = 0;

	while (num < 10)
	{
	printf("%d", num);
	num++;
	}
	printf("\n");

	return (0);
}
