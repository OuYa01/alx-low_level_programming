#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number of the numbers we want to sum
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int c;
	int sum;

	if (n == 0)
		return (0);

	va_start(args, n);

	sum = 0;

	for (c = 0; c < n; c++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
