#include "main.h"
int prime(int n, int i);

/**
 * is_prime_number - integer or not ?
 * @n: variable
 *
 * Return:if n prime number = 1  if not pn= 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

/**
 * prime - Entery point
 * @n: var
 * @i: var
 *
 * Return: if n is prime = 1 if not p = 0
 */
int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
