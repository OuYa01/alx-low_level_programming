#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers
 *
 * @argc: the number of arguments
 * @argv: vectore(array) hold thsi arguments pass into the programme
 *
 * Return: Always 0 if succ
 */

int main(int argc, char **argv)
{
	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
