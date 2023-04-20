#include <stddef.h>

/**
 * array_iterator -  function that executes a function
 * given as a parameter on each element of an array
 *
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to a function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array != NULL && action != NULL)
	{
		for (s = 0; s < size; s++)
		{
			action(array[s]);
		}
	}
}
