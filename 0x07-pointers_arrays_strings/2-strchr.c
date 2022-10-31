#include "main.h"

/**
 * _strchr - search a character in a string
 * @s: a pointer to the string
 * @c: character to be searched
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] <= '\0'; i++)
	{
		if if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
