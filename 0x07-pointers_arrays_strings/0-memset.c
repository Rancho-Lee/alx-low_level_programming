#include "main.h"
/**
 * _memset - filling memory with a constant byte
 * @s: pointer to memory
 * @b: character to copy
 * @n: number of times to copy
 * Return: char;
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
