#include "main.h"
/**
 * print_last_digit - last Digit
 *
 * @r: parameter
 *
 * Return: 0;
 *
 */
int print_last_digit(int r)
{
	int x;
	
	if (r < 0)
	{
		x = -r % 10;
		_putchar((-r % 10) + '0');
		return (x);
	}
	else
	{
		x = r % 10;
		_putchar((r % 10) + '0');
		return (x);
	}
	return (0);
}
