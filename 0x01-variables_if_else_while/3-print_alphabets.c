#include <stdio.h>
/**
 * main - A complicated putchar task
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

	start = 97;
	end = 122;
	start2 = 65;
	end2 = 90;

	while (start <= end)
	{
		putchar(start);
		start++;
	}
	while (start2 <= end2)
	{
		putchar(start2);
		start2++;
	}
	putchar('\n');
	return (0);
}
