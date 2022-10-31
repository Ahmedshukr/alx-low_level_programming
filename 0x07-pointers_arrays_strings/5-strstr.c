#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: a pointer to string
 * @needle:a pointer to string
 * Return: Always 0 for success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *sent = haystack;
		char *word = needle;

		while (*sent == *word && *word != '\0')
		{
			sent++;
			word++;
		}

		if (*word == '\0')
			return (haystack);
	}

	return (NULL);
}
