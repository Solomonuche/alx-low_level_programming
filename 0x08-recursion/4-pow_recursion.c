#include "main.h"

/**
 * _pow_recursion - a funtion that return the value of x raised to power y
 * @x: base integer
 * @y: power integer
 *
 * Return: (result)
 */

int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	result = _pow_recursion(x, y - 1);
	return (result * x);
}
