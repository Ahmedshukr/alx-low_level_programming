#include "main.h"

/**
 * puts2 - prints strings
 * @str: A pointer to int that will be changed
 * 
 * Return: return void for the correctness
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar (str[a]);
	}
	_putchar('\n');
}
