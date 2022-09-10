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
	int end2;

	start = 48;
	end = 57;
	start2 = 48;
	end2 = 57;

	while (start <= end)
	{
		while (start2 <= end2)
		{
			putchar(start);
			putchar(start2);
			start2++;
		}
		putchar(start);
		putchar(start2);
		start++;
	}
	putchar('\n');
	return (0);
}
