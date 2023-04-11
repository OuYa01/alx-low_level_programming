#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: size of string
 * @c: char we will write in string
 *
 * Return: 0 if size == 0 or Null if memory allocation is failed
 * or return p (string) if prog scc
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)/*if size is 0 return 0*/
	{
		return (0);
	}
	if (p == NULL)/*return NULL if memory alloc is failed*/
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
