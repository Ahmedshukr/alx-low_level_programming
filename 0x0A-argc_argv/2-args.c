#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
