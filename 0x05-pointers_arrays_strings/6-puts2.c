#include "main.h"
/**
 * puts2 - printing evry other character of a string
 * @str: str to be printed
 */
void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
