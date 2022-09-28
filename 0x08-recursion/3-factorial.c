#include "main.h"
/**
 * factorial - calculating the factorial of an interger
 * @n: interger to factorial
 * Return: int;
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
