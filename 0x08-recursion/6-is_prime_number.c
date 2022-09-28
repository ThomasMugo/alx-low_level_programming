#include "main.h"

/**
 * prime_check - checks to see if number is prime
 * @a: our factor
 * @b: possible prime number
 * Return: 1 if prime and 0 if not
 */
int prime_check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (prime_check(a + 1, b));
}

/**
 * is_prime_number - finds if number is prime
 * @n: number to check
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime_check(2, n));
}
