#include "main.h"
/**
 * print_square - printing squares
 * @size: size of the square
 * Return: void;
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int col, row;

		for (col = 0; col <= size; col++)
		{
			for (row = 0; row <= size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
