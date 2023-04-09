#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: is an integer variable that represents the
 * number of arguments passed to the program
 * @argv: is array
 * Return: Always 0 to suc
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; *argv; i++)
	{
		printf("%d\n", argc - 1);
		break;
	}
	return (0);
}
