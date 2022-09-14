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
	int last_digit;
	
	last_digit = r % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
	return (0);
}
