#include "main.h"
/**
 * _sqrt_recursion - using recursion to get a natural squareroot of an integer
 * @n: the integer to get its naturalsquareroot
 * Return: int;
 */
int _sqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 0));
}

/**
 * _sqrt_recursion - using recursion to get a natural squareroot of an integer
 * @n: the integer to get its naturalsquareroot
 * @i: iterator
 * Return: int;
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_recursion(n, i + 1));
}
