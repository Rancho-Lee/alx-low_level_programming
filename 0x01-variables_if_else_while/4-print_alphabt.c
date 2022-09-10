#include <stdio.h>
/**
 * main - Letting some numbers slide
 *
 * Return: 0;
 *
 */
int main(void)
{
	int start;
	int end;

	start = 97;
	end = 122;

	while (start != 113 || start != 101)
	{
		if (start <= end)
		{
			putchar(start);
			start++;
		}
	}
	putchar('\n');
	return (0);
}
