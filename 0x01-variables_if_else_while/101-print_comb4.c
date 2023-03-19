#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program prints all possible different combinations of three digits
 * where each digit is greater than the previous one.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;
	/* Loop through all digits from 0 to 9 for each of the three variables */
	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			for (l = m + 1; l <= 9; l++)
			{
				/* Check if the three digits are in increasing order */
				if (l > m && m > n)
				{
					putchar('0' + n);
					putchar('0' + m);
					putchar('0' + l);
					if (n != 7 || m != 8 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

