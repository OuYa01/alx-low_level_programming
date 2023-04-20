#include <stddef.h>

/**
 * int_index - function that searches for an integer
 *
 * @array: pointer of array
 * @size: size of array
 * @cmp: pointer of fnct
 *
 * Return: if scc 'how much integers?' else ret '-1'
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int integer;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (integer = 0; integer < size; integer++)
	{
		if (cmp(array[integer]) != 0)
		{
			return (integer);
		}
	}

	return (-1);
}
