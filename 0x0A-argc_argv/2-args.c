#include "main.h"

/**
 * main -  prints all arguments it receives
 *
 * @argc: is an integer variable that represents
 * the number of arguments passed to the program
 * @argv: is an array
 *
 * Return: Always 0 if succ
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
