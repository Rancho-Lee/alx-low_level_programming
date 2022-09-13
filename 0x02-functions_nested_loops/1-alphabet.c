#include "main.h"
void print_alphabet(void)
{
	int num, num2;

	num = 97;
	num2 = 122;

	while (num <= num2)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
}
