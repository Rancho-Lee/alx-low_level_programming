#include "variadic_functions.h"
/**
 * sum_them_all - sumation using variadic fun
 * @n: number of int to sum
 * Return: 0;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	size_t i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
