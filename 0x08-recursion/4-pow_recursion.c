#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: input integer x
 * @y: input integer y
 * Return: always 0 for success
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
