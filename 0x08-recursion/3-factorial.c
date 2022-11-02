#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the input number
 * Return: always 0 for success
 */
int factorial(int n)
{
	if (n >= 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
