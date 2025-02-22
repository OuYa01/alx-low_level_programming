#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 if Success
 *
 */

int _putchar(char c)
{
	/*1 for standard output (stdout), A pointer to the data that should be written, The number of bytes to write.*/
	return (write(1, &c, 1));
}
