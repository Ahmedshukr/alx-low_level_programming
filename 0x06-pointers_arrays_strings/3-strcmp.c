#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string 
 * @s2: the second string
 * Return: returns the difference if they are not same, or same if they are same
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
