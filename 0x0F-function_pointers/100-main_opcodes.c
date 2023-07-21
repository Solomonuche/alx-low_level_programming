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
	char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = main;

	opcodes = (char *)main_ptr;
	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", opcodes[i]);
			break;
		}
		printf("%02hhx", opcodes[i]);
	}

	return (0);
}
