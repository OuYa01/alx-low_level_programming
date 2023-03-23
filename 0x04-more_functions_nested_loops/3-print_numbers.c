#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print 0-9
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
