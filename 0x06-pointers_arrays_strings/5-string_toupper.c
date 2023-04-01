#include "main.h"
#include <ctype.h>
/**
 * string_toupper - change all lowercase to uppercase
 * @str: pointer
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}

