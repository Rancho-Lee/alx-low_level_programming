#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print certain numbers
 *
 * Return: void;
 *
 */
int main(void)
{
	print_most_numbers();

	return (0);
}

void print_most_numbers(void)
{
	int num;

	num = 48;

	while (num <= 57)
	{
		if (num != 50 && num != 52)
		{
			putchar(num);
		}
		num++;
	}
	putchar('\n');
}
