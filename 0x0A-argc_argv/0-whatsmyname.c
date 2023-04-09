#include "main.h"
#include <stdio.h>
/**
 * main - print the name of prog
 *
 * @argc: is an integer variable that represents
 * the number of arguments passed to the program
 *
 * @argv: is an array
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
