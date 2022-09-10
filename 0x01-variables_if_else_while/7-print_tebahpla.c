#include <stdio.h>
/**
 * main - A reverse character
 *
 * Return: 0;
 *
 */
int main(void)
{
	int start;
	int end;

	start = 122;
	end = 97;

	while (start >= end)
	{
		putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
