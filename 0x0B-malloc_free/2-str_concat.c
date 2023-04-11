#include <stdlib.h>
/**
 * str_concat -  function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: p if scc*
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j;
	int size1 = 0, size2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
	}

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	p = malloc(sizeof(char) * (size1 + size2 + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < size2 ; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';

	return (p);
}
