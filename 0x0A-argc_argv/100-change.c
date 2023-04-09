#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: argument count
 * @argv: argument vector is an array
 *
 * Return: 1 if the num of arg passed to
 * programm is not exactly 1 or 0 if scc
 */
int main(int argc, char *argv[])
{
	int cents, coins, money[] = {25, 10, 5, 2, 1};
	int i;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;

	for (i = 0; cents > 0; i++)
	{
		coins += cents / money[i];
		cents %= money[i];
	}

	printf("%d\n", coins);
	return (0);
}
