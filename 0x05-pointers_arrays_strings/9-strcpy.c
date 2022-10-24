#include "main.h"

/**
 * _strcpy - copies string from one variable to another
 * @dest: contains string
 * @src: contains string
 * Return: dest scucess
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
