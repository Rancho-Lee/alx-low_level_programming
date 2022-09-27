#include "main.h"
/**
 * _memcpy - cpy memory area
 * @dest: destination of cpied memory area
 * @src: source of copied memory area
 * @n: number of bytes copied from memory area
 * Return: char;
 */
char *_memcpy(char* dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
