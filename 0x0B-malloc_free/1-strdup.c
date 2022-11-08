#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, end;
	char *array;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		end++;

	array = malloc(sizeof(char) * (end + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		array[i] = str[i];

	array[end] = '\0';

	return (array);
}
