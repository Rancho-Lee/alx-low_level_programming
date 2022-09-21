#include "main.h"
/**
 * puts2 - printing evry other character of a string
 * @str: str to be printed
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
