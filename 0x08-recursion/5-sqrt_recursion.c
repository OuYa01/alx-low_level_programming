#include "main.h"
int natural(int n, int k);
/**
 * _sqrt_recursion - this fnc will returns the natural
 * square root of a number
 * @n: the number we will sqr
 * Return: sqr(n)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural(n, 0));
}

/**
 * natural - to find the natural square root of a number
 * @n: var calcule the sqaure
 * @k: variable
 *
 * Return: the resulting square root
 */
int natural(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	return (natural(n, k + 1));
}
