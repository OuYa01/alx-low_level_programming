#include "main.h"
/**
 * void swap_int(int *a, int *b) -  function that swaps the
 * values of two integers
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int atay = *a;
	*a = *b;
	*b = atay;
}
