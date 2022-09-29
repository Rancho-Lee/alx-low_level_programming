#include "main.h"
/**
 * is_prime_number - checking for prime numbers
 * @n: numbers  to check for
 * Return: int;
 */
int is_prime_number(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number(n, n - 1);
}

/**
 * is_prime_number - checking for prime numbers
 * @n: numbers to check for
 * @i: iterator
 * Return: int;
 */

int is_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i = 0 && i > 0)
	{
		return (0);
	}
	return (is_prime_number(n, i - 1);
}
