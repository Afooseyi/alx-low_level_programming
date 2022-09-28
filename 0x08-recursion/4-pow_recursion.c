#include "main.h"

/**
 * _pow_recursion - this function returns the exponent or power of a number
 * @x: The base, an integer
 * @y: the exponent, an integer
 * Return: An int which is the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
