#include <stdlib.h>

/**
 * _calloc - allocate memory for an array using malloc
 *
 * @nmemb: number of element
 * @size: the size of each element
 *
 * Return: NULL if nmemb == 0 or size == 0 and if
 * malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int *p = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
