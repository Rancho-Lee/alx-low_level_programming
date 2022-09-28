#include "main.h"
/**
 * _print_rev_recursion - print the reverse of a string using recursion
 * @s: string source to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar('\n');
	}
}
