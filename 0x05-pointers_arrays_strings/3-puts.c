#include "main.h"
/**
 * _puts - printing an array of char
 * @str: string to be printed
 * Return: 0;
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
