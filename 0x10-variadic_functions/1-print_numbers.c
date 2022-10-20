#include "variadic_functions.h"
/**
 * print_numbers - printing of numbers
 * @seperator: seperating numbers to be printed
 * @n: number of int passed
 * Return: 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	size_t i;
	int num_arg;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num_arg = va_arg(ap, int);
		if (!separator)
			printf("%d", num_arg);
		else if (separator && i == n - 1)
			printf("%d", num_arg);
		else
			printf("%d%s", num_arg, separator);
	}

	va_end(ap);
	printf('\n');
}
