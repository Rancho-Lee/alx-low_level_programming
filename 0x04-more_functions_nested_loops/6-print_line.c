#include "main.h"
/**
 * print_line - printing lines
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
		for (; n == n; n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
