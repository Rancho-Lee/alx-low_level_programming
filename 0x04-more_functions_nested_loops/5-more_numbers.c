#include "main.h"
/**
 * more_numbers - multiple numbers
 *
 * Return: void;
 *
 */
void more_numbers(void)
{
	int space, num;

	for (space = 0; space < 10; space++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
