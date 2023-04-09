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

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);

			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	return (0);

}
