#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring
 *
 * @haystack: the string to search in
 * @needle: the sub to search for
 *
 * Return: &haystack[i]
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i + j]; j++)
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
