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
	k = i;

	for (j = k - 1; j >= (k / 2); j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
