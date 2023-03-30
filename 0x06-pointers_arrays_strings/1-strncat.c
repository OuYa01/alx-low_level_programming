#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

/*A function that concatenates two strings with a limit*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0; /*index for dest*/
	int j = 0; /*index for src*/

	/*Find the end of dest*/
	while (dest[i] != '\0')
	{
		i++;
	}

	/*Copy at most n bytes from src to dest*/
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/*Add null terminator to dest*/
	dest[i] = '\0';

	/*Return a pointer to dest*/
	return (dest);
}
