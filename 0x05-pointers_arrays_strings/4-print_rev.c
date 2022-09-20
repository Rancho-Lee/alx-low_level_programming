#include "main.h"
/**
 * print_rev - printing a reverse string
 * @s: parameter to be reversed
 * Return: 0;
 */
void print_rev(char *s)
{
	int i;

	for (i = '\0'; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
