#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts
 * a binary number to decimal
 *
 * @b:  is pointing to a string of 0 and 1 chars
 *
 * Return: the ruslte
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int r = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}

		r *= 2;

		if (b[i] == '1')
		{
			r += 1;
		}
	}

		return (r);
}
