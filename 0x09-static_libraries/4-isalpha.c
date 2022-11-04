#include "main.h"

/**
 * _isalpha - Checks if an input is an alphabet or not
 * @c: Contains input to be compared
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
