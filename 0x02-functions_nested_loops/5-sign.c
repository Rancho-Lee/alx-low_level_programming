#include "main.h"
/**
 * print_sign - sign printing
 *
 * @n: parameter
 *
 * Return: 0;
 *
 */
int print_sign(int n)
{
	int r;
	
	r = _putchar(n);
	
	if (r > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (r == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (r < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
