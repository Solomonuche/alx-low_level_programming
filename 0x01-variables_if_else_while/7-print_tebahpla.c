#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * a program that prints alphabet in reverse order
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char a;

	a = 'z';

	while (a >= 'a')
	{
	putchar(a);
	a--;
	}
	putchar('\n');

	return (0);
}
