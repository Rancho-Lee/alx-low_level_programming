#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to be halved
 */
void puts_half(char *str)
{
	int i, j, k;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (i % 2)
	{
		for (k = (i - 1) / 2; k < i - 1; k++)
		{
			_putchar(str[k + 1]);
		}
	}
	_putchar('\n');
}
