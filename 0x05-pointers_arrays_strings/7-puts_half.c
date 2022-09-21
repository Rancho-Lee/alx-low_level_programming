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
	for(j = i - 1; j >= (i / 2); j--)
	{
		_putchar(str[j]);
	}
}
