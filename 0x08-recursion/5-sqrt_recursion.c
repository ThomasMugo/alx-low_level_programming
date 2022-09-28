#include "main.h"

/**
 * sqrt_check - checks for the square root of b
 * @a: our guess at sqrt
 * @b: number to find sqrt
 * Return: value of the square root
 */
int sqrt_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_check(a + 1, b));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: our integer
 * Return: value of the square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
