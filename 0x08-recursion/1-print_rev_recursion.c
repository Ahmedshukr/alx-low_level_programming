#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the input character
 * Return: Always 0 for success
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
