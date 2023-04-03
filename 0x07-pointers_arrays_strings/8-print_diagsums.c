#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, colums = 0, rows = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		colums += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		rows += *(a + p);
	}
	printf("%i, %i\n", colums, rows);
}
