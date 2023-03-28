#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int a = 0, b = 0;
	char atay;

	while (s[b] != '\0')
                b++;

	b--;

	while (a < b)
	{
		atay = s[a];
		s[a] = s[b];
		s[b] = atay;
		a++;
		b--;
	}
}
