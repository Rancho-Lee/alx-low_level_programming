#include <stdio.h>
/**
 * main - This is a nested loop
 *
 * Return: 0;
 *
 */
int main(void)
{
	int start;
	int end;
	int start2;

	start = 48;
	end = 57;
	start2 = 49;

	while (start <= end)
	{
		while (start2 <= end)
		{
			if (start2 > start)
			{
				putchar(start);
				putchar(start2);
				if (start != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			start2++;
		}
		start2 = 49;
		start++;
	}
	putchar('\n');
	return (0);
}
