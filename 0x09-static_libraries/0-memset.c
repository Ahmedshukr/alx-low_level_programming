#include "main.h"

/**
 * _memset - fills the memory with constant byte
 * @s: the address of the memory
 * @b: the constant which is the size of the memory
 * @n: bytes
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
