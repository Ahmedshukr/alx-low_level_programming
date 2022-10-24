#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the input parameter
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	j = i - 1;
	while (j >= 0)
	{
	_putchar(s[j]);
	j--;
}
