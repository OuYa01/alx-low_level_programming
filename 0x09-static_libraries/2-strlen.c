#include "main.h"
/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string to get the length
 * Return: leng of @s.
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
