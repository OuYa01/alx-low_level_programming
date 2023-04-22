#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  function that prints numbers
 *
 * @separator: pointers of comma
 * @n: the number of number this fnc will print
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int p;
	int print;

	va_start(args, n);

	for (p = 0; p < n; p++)
	{
		print = va_arg(args, int);
		printf("%d", print);
		if (separator != NULL && print != 402)
			printf("%s", separator);
	}
	printf("\n");


	va_end(args);
}
