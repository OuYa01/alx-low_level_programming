#include "main.h"

/**
 * main - print the name of programme
 *
 * @argc: is an integer variable that represents
 * the number of arguments passed to the program
 * @argv: is an array
 *
 * Return: Always 0 if succ
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
