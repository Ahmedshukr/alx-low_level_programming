#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: returns a pointer to the resulting string dest
 */

char *_stnrcat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
