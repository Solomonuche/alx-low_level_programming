#include "main.h"

/**
 * primeHelper - a helper function that checks whether a number is prime or not
 * @n: integer value to be checked for prime
 * @div: divisor integer
 *
 * Return: primeHelper
 */

int primeHelper(int n, int div)
{
	if (n < 2)
		return (0);

	if (div == 1)
		return (1);

	if (n % div == 0)
		return (0);

	return (primeHelper(n, div - 1));
}

/**
 * is_prime_number - a function that checks and input integer is a prime number
 * @n: input integer number
 *
 * Return: (true)
 */

int is_prime_number(int n)
{
	return (primeHelper(n, n - 1));
}
