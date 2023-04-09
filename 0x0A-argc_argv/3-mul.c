#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: is an integer variable that represents
 * the number of arguments passed to the program
 *
 * @argv: is an array of character pointers
 *
 * Return: if error 1 , if scc 0
 *
 */
int main(int argc, char *argv[])
{
	int i, multip = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			multip *= atoi(argv[i]);
		}
			printf("%d\n", multip);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
