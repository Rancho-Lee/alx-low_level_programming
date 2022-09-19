#include <stdio.h>
/**
 * main - print sum of numbers
 * Return: void;
 */
int main(void)
{
	unsigned long int p, m, o;
	int n;

	o = 0;
	m = 0;
	p = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0)
		{
			m += n;
		}
		else if (n % 5 == 0)
		{
			o += n;
		}
	}
	p = o + m;
	printf("%lu\n", p);
	return (0);
}
