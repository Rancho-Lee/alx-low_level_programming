#include "main.h"
/**
 * _strncat - catenating specific number of strings
 * @dest: the destination of new string
 * @src: source of the string
 * @n: number of string to be catenated
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}
