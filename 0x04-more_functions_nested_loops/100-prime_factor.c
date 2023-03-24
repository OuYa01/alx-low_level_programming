#include<stdio.h>
#include<math.h>
/**
 * main - entry point
 *
 * Return: int
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int j;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (j = 3; j <= sqrt(n); j = j + 2)
	{
		while (n % j == 0)
		{
			n = n / j;
		}
	}

	printf("%lu\n", n);
	return (0);
}
