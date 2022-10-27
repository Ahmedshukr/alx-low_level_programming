#include "main.h"

/**
 * reverse_array - it reverses string array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: reversed array as a result
 */

void reverse_array(int *a, int n)
{
	int i, x;

	i = x = 0;
	n -= 1;
	while (i <= n)
	{
		x = a[n];
		a[n--] = a[i];
		a[i++] = x;
	}
}
