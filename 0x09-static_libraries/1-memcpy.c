#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: the pointer of the destination
 * @src: the pointer of the source
 * @n: bytes
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
