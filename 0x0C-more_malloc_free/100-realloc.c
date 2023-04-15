#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: is pointer to the memory block to be reallocated
 * @old_size: the old size of pointer
 * @new_size: the new size of pointer
 *
 * Return: ptr if ns = os or malloc(ns) or NULL if ns = 0
 * or np if scc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	char *op = ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	np = malloc(new_size);

	if (np == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
	{
		np[i] = op[i];
	}
	free(ptr);
	return (np);
}
