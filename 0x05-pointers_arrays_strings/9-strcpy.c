#include "main.h"
/**
 * _strcpy - copying one string to the other
 * @src: string to copy from
 * @dest: string to copy to
 * Return: character dest
 */
char _strcpy(char *dest, char *src)
{
	int i, len;

	i = 0;

	while (src[i] <= '\0')
	{
		i++;
	}
	len = i;
	
	dest[i] = src[i];
	return (dest);
}
