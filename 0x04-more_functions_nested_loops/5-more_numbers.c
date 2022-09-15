#include "main.h"
/**
 * more_numbers - multiple numbers
 *
 * Return: void;
 *
 */
void more_numbers(void)
{
	int num, space;

	space = 0;

	while (space < 10)
	{
		num = 0;
		if (num <= 9)
		{
			_putchar(num + '0');
			num++;
		}
		else if (num > 9 && num <= 14)
		{
			_putcahr((num / 10) + '0');
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
	}
	return ;
}
