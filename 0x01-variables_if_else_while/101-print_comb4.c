#include <stdio.h>
/**
 * main - A more complicated nested loop
 *
 *Return: 0;
 *
 */
int main(void)
{
	int num;
	int num2;
	int num3;
	int end;

	num = 48;
	num2 = 49;
	num3 = 50;
	end = 57;

	while (num <= end)
	{
		while (num2 <= end)
		{
			while (num3 <= end)
			{
				if (num3 > num2 && num2 > num)
				{
					putchar(num);
					putchar(num2);
					putchar(num3);
					if (num != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num3 = 50;
			num2++;
		}
		num2 = 49;
		num++;
	}
	putchar('\n');
	return (0);
}
