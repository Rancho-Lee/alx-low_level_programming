#include <stdarg.h>
/**
 * sum_them_all - sumation using variadic fun
 * @n: number of int to sum
 * Return: 0;
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list ap;

	va_start(ap, n);

	int i, int sum;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
