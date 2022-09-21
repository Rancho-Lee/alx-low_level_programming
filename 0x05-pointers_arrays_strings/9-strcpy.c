#include "main.h"
/**
 * *_strcpy - copying one string to the other
 * @src: string to copy from
 * @dest: string to copy to
 * Return: character dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] <= '\0'; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
