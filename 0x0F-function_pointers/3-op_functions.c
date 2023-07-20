#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - a function that sums tow numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: (a + b)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that finds the difference between two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: (a -b)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that return the product of two number
 * @a: first integer
 * @b: second integer
 *
 * Return: (a * b)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the result of division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: (a/b)
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that returnss the remainder of division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: (a % b)
 */

int op_mod(int a, int b)
{
        if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
	return (a % b);
}
