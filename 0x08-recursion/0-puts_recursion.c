#include "main.h"
/**
*
* _print_rev_recursion - function that prints a string in reverse
* @s: word
* 
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

}
