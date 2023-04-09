#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: is an integer variable that represents the number of arg
 * ments passed to the program
 * @argv: is an array of character pointers
 *
 * Return: Always 0 to scc
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
