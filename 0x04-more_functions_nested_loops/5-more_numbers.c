#include "main.h"

/**
 * more_numbers - Prints numbers 10 times
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	_putchar(j + '0');
	}
	_putchar('\n');
	}
	_putchar('\n');
}
