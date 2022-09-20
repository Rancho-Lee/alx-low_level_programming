#include "main.h"
/**
 * swap_int - swapping integers
 * @a: first integer
 * @b: second integer
 * Return: 0;
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
