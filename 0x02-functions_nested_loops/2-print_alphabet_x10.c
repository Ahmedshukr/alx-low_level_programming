#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in 10times
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	char alphabets;
	int i = 0;
	
	while(i < 9)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		i++;
		_putchar('\n');
	}
}
