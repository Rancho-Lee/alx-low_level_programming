#include <stdio.h>
/**
 * main - This is based on putchar
 *
 * Return: 0;
 *
 */
int main(void)
{
	/*declaring my data type and any variable*/
	char start;
	char end;
	char ch;

	start = 'a';
	end = 'z';
	ch = start;

	while (start <= end)
	{
		putchar(ch);
		ch++;
	}
	return (0);


}
