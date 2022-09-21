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

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
