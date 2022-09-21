#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to be halved
 */
void puts_half(char *str)
{
	int i, j;

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
	else
	{
		for (j = i - 1; j >= ((i - 1) / 2); j--)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
