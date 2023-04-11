#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is
 * a duplicate of the string str
 *
 * @str:pointer of string to br duplicated
 *
 * Return: (Null) if not enough memory is available
 * or (p) if prog is scc
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int size = 0;
	unsigned int i;

	/*find the length of the string*/
	while (str[size] != '\0')
	{
		size++;
	}

	p = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size ; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
