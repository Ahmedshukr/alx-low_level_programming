#include "main.h"
int squareroot(int n, int i);


/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squareroot(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i == n / 2)
		return (-1);
	return (squareroot(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the input integer
 * Return: always 0 for success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
