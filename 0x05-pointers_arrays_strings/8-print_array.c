#include <stdio.h>
#include "main.h"
/**
 * print_array - printing a number of certain array
 * @a: array to be printed
 * @n: the number of array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%c, ", a[i]);
	}
}
