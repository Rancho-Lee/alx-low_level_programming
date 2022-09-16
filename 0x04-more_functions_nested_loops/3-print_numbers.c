#include "main.h"
#include <stdio.h>
/**
 * print_numbers - printing of numbers
 *
 * Return: void;
 *
 */
int main(void)
{
	print_numbers();
	return (0);
}
void print_numbers(void)
{
	int n;
	
	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}
