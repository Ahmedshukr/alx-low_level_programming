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
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		i++;
	}
	return (s);
}
