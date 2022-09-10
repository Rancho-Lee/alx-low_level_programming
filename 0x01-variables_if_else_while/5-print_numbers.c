#include <stdio.h>
/**
 * main - Alphabet is neccessary
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
		start++;
	}
	putchar('\n');
	return (0);
}
