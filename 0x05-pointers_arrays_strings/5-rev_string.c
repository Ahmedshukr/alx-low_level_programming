#include "main.h"

/**
 * rev_string - reverses string
 * @s: the reversing string
 * Return: return string that is reversed
 */
void rev_string(char *s)
{
	char r = s[0];
	int scount = 0;
	int i;

	while (s[scount] != '\0')
		scount++;
	for (i =0; i < scount; i++)
	{
		scount--;
		r = s[i];
		s[i] = s[scount];
		s[scount] = r;
	}
}
