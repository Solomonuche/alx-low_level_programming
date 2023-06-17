#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * a program that prints alphabet in lower case
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char a;
	char A;

	a = 'a';
	A = 'A';

	while (a <= 'z')
	{
	putchar(a);
	a++;
	}

	while (A <= 'Z')
	{
	putchar(A);
	A++;
	}

	putchar('\n');

	return (0);
}
