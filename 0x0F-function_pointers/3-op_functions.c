#include "3-calc.h"

/**
 * op_add - function that selects the correct
 * function to perform the operation
 *
 * @a: first number
 * @b : second number
 *
 * Return: sum(a, b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 *
 * @a: fisrt number
 * @b: second number
 *
 * Return: sub(a, b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 *
 * @a: fisrt number
 * @b: second number
 *
 * Return: product(a, b)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the
 * division of a by b
 *
 * @a: first number
 * @b: second number
 *
 * Return: div(a, b)
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * of a by b
 *
 * @a: first num
 * @b: second num
 *
 * Return: reminder(a, b)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
