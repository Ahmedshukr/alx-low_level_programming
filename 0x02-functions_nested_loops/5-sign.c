#include "main.h"

/**
 * print_sign - Prints the sigh of an integer
 * @n: Contains integer to be compared
 * Return: always 2
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	_putchar('\n');
	return (2);
}
