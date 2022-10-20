#include "main.h"

/**
 * _isdigit - checks the numbers between 0 - 9
 * @c: tested number
 * Return: returns 1 if c is digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
