#include <stdio.h>

/**
 * main - Entry point
 * printf function that prints to the output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(m));
		
	return (0);
}
