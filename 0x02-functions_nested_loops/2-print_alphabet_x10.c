#include "main.h"
/**
 * print_alphabet_x10 - Multiple skills
 *
 * Description: Multiplying outputs
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	int i, num, num2;

	i = 0;

	while (i < 10)
	{
		num = 97;
		num2 = 122;
		while (num <= num2)
		{
			_putchar(num);
			num++;
		}

		_putchar('\n');
		i++;
	}
}
