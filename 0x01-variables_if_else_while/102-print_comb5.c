#include <stdio.h>
/**
 * main - so so complicated a nested loop
 *
 * Return: 0;
 *
 */
int main(void)
{
	int num, end, num2, num3, num4;

	num = 48;

	while (num <= end)
	{
		while (num2 <= end)
		{
			while (num3 <= end)
			{
				while (num4 <= end)
				{
					if (num3 > num || num4 > num2)
					{
						putchar(num);
						putchar(num2);
						putchar(' ');
						putchar(num3);
						putchar(num4);
						if (num2 != 8)
						{
							putchar(',');
							putchar(' ');
						}
					}
					num4++;
				}
				num4 = 48;
				num3++;
			}
			num3 = 48;
			num2++;
		}
		num2 = 48;
		num++;
	}
	putchar('\n');
	return (0);
}
