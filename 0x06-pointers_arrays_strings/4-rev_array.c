#include "main.h"
/**
 * reverse_array - printing a reverse array
 * @a: the numbers of array
 * @n: the number of elements to swap
 * Return: void;
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	n -= 1;

	while (i < n)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n--] = tmp;
	}
}
