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
	int start;
	int end;
	int ch;

	start = 97;
	end = 122;
	ch = start;

	while (start <= end)
	{
		putchar(ch);
		ch++;
	}
	return (0);


}
