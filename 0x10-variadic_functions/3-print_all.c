#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 *
 * @format: list of types of arg
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int a = 0;
	char *string, *space = "";

	va_start(args, format);

	if (format != NULL)
	{
		while (format[a] != '\0')
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", space, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", space, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", space, string);
					break;
				default:
					a++;
					continue;
			}
			space = ", ";
			a++;
		}
	}
	printf("\n");

	va_end(args);
}
