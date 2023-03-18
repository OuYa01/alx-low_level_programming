#include<stdio.h>
/**
 * main - Entry point
 * int: variable = value
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a <= 10)
	{
		printf("%d", a);
		a = a + 1;
	}
	printf("\n");
	return (0);
}

