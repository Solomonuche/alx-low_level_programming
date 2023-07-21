#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;
	int num_bytes = atoi(argv[1]);
	int (*main_ptr)(int, char *[]);
	unsigned char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = main;

	opcodes = (unsigned char *)main_ptr;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcodes[i]);
	}
	printf("\n");

	return (0);
}
