#include "main.h"

/**
 * sqrtHelper - a helper function that performs square root of integers
 * @n: integer number
 * @j: intial guess
 *
 * Return: sqrtHelper
 */

int sqrtHelper(int n, int j)
{
	if (n < 0)
		return (-1);

	if (j * j == n)
		return (j);

	if (j * j > n)
		return (-1);

	return (sqrtHelper(n, j + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: input integer
 *
 * Return: (n)
 */

int _sqrt_recursion(int n)
{
	int j = 0;

	return (sqrtHelper(n, j));
}
