#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input distination
 * @src: input src
 *
 * Return: pointer of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/*Find the length of the destination string*/
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	/*append the source string to the end of the destinatioon of string*/
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	/*Return the pointer*/
	return (dest);
}
