#include "main.h"

/**
 * swap_int - this function swaps two integer var
 * @a: integer pointer variabe
 * @b: integer pointer variable
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
