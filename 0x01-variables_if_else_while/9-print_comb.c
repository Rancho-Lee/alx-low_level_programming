#include <stdio.h>
/**
 * main - Combination of digits
 *
 * Return: 0;
 *
 */
int main(void)
{
	int start;
	int end;

	start = 48;
	end = 57;

	while (start <= end)
	{
		putchar(start);
		if (start != 57)
		{
			putchar(',');
			putchar(' ');
		}
		start++;
	}
	putchar('\n');
	return (0);
}
