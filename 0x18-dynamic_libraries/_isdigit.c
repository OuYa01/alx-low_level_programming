#include "main.h"
/**
 * _isdigit - checks for a digital
 *
 * @c: parameter c
 *
 * Return: 1 if c is a digtal, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
