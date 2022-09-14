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
	int n;
	
	n = r % 10;

	print_last_digit(n);
	return (0);
}
