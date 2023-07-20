#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * 
 * Return: (int)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*fptr)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	fptr = get_op_func(argv[2]);
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = fptr(num1, num2);
	printf("%d\n", result);

	return (0);
}
