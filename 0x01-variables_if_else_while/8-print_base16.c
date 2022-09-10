#include <stdio.h>
/**
 *main - hexadecimal will be done
 *
 * Return: 0;
 *
 */
int main(void)
{
	int start;
	int stop;
	int resume;
	int end;

	start = 48;
	stop = 57;
	resume = 97;
	end = 102;

	while (start <= stop)
	{
		putchar(start);
		start++;
	}
	while (resume <= end)
	{
		putchar(resume);
		resume++;
	}
	putchar('\n');
	return (0);
}
