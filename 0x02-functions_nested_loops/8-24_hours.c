#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: 0;
 *
 */
void jack_bauer(void)
{
	int num, num1, num2, num3;

	num = 48;
	
	while (num <= 50)
	{
		num1 = 48;
		while (num1 <= 51)
		{
			num2 = 48;
			while (num2 <= 53)
			{
				num3 =48;
				while (num3 < 57)
				{
					_putchar(num);
					_putchar(num1);
					_putchar(':');
					_putchar(num2);
					_putchar(num3);
					_putchar('\n');
					num3++;
				}
				num2++;
			}
			num1++;
		}
		num++;
	}
}
