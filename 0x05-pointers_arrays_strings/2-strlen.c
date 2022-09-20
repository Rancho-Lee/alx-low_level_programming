#include "main.h"
/**
 * _strlen - length of a string
 * @s: parameter to find the length
 * Return: 0;
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
