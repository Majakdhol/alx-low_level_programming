#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number to be used
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: test number
 * @x: square number
 *
 * Return: the square root of n
 */
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}