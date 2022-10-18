#include "main.h"

/**
 * print_alphabet - prints alphabet
 * Prints all alphabets in lowercase
 * Return: Always 0 (Success/correct)
 */
void print_alphabet(void)
{
	char alphabets;


	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
