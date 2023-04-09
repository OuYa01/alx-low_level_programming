#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - make sum of positive num
 * @argc:an integer variable
 * @argv: an array of char pointer
 *
 * Return: 1 if is not digt , 0 if scc
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);

}
