#include <stdlib.h>

#include <stdio.h>

#include "main.h"

/**

 * malloc_checked - allocates memory using malloc.

 * @b: input argument

 * Return: returns a pointer to new mem

 */

void *malloc_checked(unsigned int b)

{

	void *n;



	n = malloc(b);



	if (n == NULL)

		exit(98);

	return (n);

}