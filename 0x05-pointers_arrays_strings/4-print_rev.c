#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the input parameter
 */
void print_rev(char *s)
{
	int i, len, temp;

	len = strlen(s);
	for (i = 0; i < len/2; i++)
	{
		temp = s;
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
