#include "main.h"


/**
 * _strlen - prints the length of string
 * @s: string input argument
 * Return: return 0 if success
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
