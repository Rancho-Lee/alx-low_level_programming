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

	for (x = 0; x < 10)
	{
		for (z = 0; z < 10)
		{
			y = x * z;
			_putchar((y % 10) + '0');
			if (z != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			z++;
		}
		x++;
		_putchar('\n');
	}
}
