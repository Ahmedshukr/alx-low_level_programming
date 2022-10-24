#include "main.h"
#include <stdio.h>

/**
 * print_array - It prints the array to the screen
 * @n: It is the size of the array
 * @a: it is the array name
 * Return: Always 0 (success)
 */
void print_array(int *a, int n)
{
	int i;


	i = 0;
	while ((i < n))
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
	i++;
	}
	printf("\n");
}
