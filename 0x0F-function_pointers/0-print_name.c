#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 *
 * @name: name thta will be print
 * @f: pointer to a fnct
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
