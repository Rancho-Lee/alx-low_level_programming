#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - using recursion to get a natural squareroot of an integer
 * @n: the integer to get its naturalsquareroot
 * Return: int;
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}

/**
 * _sqrt - using recursion to get a natural squareroot of an integer
 * @n: the integer to get its naturalsquareroot
 * @i: iterator
 * Return: int;
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
