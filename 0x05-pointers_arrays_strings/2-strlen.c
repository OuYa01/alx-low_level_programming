#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length
 * Return: leng of @str.
 */
int _strlen(char *s)
{
	int leng = 0;
	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
