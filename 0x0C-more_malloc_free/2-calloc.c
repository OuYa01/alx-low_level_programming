#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the address of buffe
 * @b: nwe value we want to write
 * @n: how much we want to print 'b'.
 *
 * Return: a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

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

	char *p;
	unsigned int tsize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tsize = nmemb * size;
	p = malloc(tsize);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, tsize);
	return (p);
}
