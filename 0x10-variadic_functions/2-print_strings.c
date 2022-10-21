#include "variadic_functions.h"
/**
 * print_strings - printing strings
 * @separator: string saparator
 * @n: number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	size_t i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (!separator)
			printf("%s", str);
		else if (!str)
			printf("(nil)");
		else if (separator && i == n - 1)
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}

	va_end(ap);
	printf("\n");
}
