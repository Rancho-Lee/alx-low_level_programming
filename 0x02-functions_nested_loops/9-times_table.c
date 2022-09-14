#include "main.h"
/**
 * times_table - getting familiar with the times table
 *
 * Return: void;
 *
 */
void times_table(void)
{
	int x, y, z;

	x = 0;

	while (x < 10)
	{
		z = 0;
		while (z < 10)
		{
			y = x * z;
			if (y <= 9)
			{
				_putchar(y + '0');
				if (z != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (y > 9)
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
				if (z != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			z++;
		}
		x++;
		_putchar('\n');
	}
}
