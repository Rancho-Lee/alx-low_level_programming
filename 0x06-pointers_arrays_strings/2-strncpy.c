#include "main.h"
/**
 * _strncpy - copying one string to another
 * @dest: destination to copy to
 * @src: source of string
 * @n: number of string to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
