#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime_no = 612852475143, div;


	while (div < (prime_no / 2))
	{
		if ((prime_no % 2) == 0)
		{
			prime_no /= 2;
			continue;
		}


		for (div = 3; div < (prime_no / 2); div += 2)
		{
			if ((prime_no % div) == 0)
				prime_no /= div;
		}
	}


	printf("%ld\n", prime_no);


	return (0);
}
