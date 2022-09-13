#include "main.h"
/**
 * print_alphabet - header
 *
 * Description: 'This is a header task'
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
	int num, num2;

	num = 97;
	num2 = 122;

	while (num <= num2)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
