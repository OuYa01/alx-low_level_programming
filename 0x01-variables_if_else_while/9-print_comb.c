#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n = 0;
	int c;

	while (n <= 9)
	{
		c = n + '0';
		putchar(c);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
			n++;
		}
		else
		{
			n++;
		}
	}
	putchar('\n');

	return (0);
}
