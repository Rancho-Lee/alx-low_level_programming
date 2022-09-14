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

	for (x = 0; x < 10; x++)
	{
		y = x * z;
		for (z = 0; z < 10; z++)
		{
			_putchar((y % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
