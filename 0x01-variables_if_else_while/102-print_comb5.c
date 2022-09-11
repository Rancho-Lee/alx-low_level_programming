#include <stdio.h>
/**
 * main - complicated nest loop
 *
 * Return: 0;
 *
 */
int main(void)
{
	int num, num2;

	num = 0;

	while (num <= 99)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			if (num2 < num)
			{
				putchar((num / 10) + '0');
				putchar((num % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				if (num != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
