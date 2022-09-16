#include "main.h"
/**
 * print_line - printing lines
 * @n: parameter required
 *
 * Return: void;
 *
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 1;

		for (i = 1; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
