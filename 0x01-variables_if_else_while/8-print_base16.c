#include <stdio.h>
/**
 * main - entry point
 * int n ;variable value 0
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;
	int c;

	while (n <= 9)
	{
		c = n + 48;
		putchar(c);
		n++;
	}
	while (n >= 9 && n < 16)
	{
		c = n + 87;
		putchar(c);
		n++;
	}
	putchar('\n');

	return (0);
}
