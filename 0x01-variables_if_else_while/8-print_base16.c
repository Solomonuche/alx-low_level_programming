#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * a program that prints base 16
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char a;
	char b;

	a = '0';
	b = 'a';

	while (a <= '9')
	{
	putchar(a);
	a++;
	}

	while (b <= 'f')
	{
	putchar(b);
	b++;
	}

	putchar('\n');

	return (0);
}
