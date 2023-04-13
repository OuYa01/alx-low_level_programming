#include<stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory
 *
 * exit: value 98 if fails
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
