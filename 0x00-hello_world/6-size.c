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
	printf("Size of a char: %zu byte(s)\n", sizeof(i));
	printf("Size of a int: %zu byte(s)\n", sizeof(j));
	printf("Size of a long int: %zu byte(s)\n", sizeof(k));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a float: %zu byte(s)\n", sizeof(m));
		
	return (0);
}
