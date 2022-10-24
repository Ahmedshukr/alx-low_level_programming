#include "main.h"

/**
 * _puts - prints a string
 * *@str: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
	return;
}
