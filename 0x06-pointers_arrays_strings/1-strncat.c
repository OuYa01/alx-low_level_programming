#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input s1
 * @src: input s2
 * @n: input value thats i want to print from s1
 *
 * Return: dest
 */

/*A function that concatenates two strings with a limit*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	/*Find the length of the destination string*/
	for (i = 0 ; dest[i] != '\0'; i++)
	{
	}
	/*Append the source string to the end of the destination string*/
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	/*Return the pointer*/
	return (dest);
}
