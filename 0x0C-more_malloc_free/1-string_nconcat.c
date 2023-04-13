#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string wel be concat
 * @n: size of s2 in bytes
 *
 * Return: NULL if fails or p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;
	unsigned int size1 = 0;
	unsigned int size2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	if (n >= size2)
		n = size2;

	p = malloc(sizeof(char) * (n + size1 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';

	return (p);
}
