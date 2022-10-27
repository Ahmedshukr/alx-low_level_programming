#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @s: pointer of the string to be converted
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 'a' - 'A';
		i++;
	}
	return (c);
}
