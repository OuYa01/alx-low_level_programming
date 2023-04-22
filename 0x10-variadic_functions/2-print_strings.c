#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @separator: coma
 * @n: the number of strings will the fnc print
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int s;
	char *string;

	va_start(args, n);

	for (s = 0; s < n; s++)
	{
		string = va_arg(args, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", string);

		if (separator != NULL && s != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
