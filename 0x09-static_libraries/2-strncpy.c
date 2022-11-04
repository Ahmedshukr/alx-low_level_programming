#include "main.h"

/**
 * _strncpy - copies string array
 * @dest: pointer of the destination
 * @src: pointer of the source
 * @n: number of bytes
 * Return: returns a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
