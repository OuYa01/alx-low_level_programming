#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that adds positive numbers
 *
 * @argc: store the number of arguments
 * @argv: vectore store each argument into string
 *
 * Return: 0 if succ
 */
int main(int argc, char **argv)
{
	int i;
	int sum;
	char *endptr;
	long value;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		value = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += (int)value;
	}

	printf("%d\n", sum);

	return (0);
}
