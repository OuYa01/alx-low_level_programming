#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: min
 * @max: max
 *
 * Return: if min > max  "NULL" else malloc fails return "NULL"
 * else return "the pointer p to creat array"
 */
int *array_range(int min, int max)
{
	int *p, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
