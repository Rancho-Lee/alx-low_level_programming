#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate string
 * @s1: string 1
 * @s2: string 2
 * @n: number of strings
 * Return: Char
 */
char *string_nconcat(char s1, char s1, unsigned int n)
{
	char *p;
	unsigned int len1, len2, i, j;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
	{
		p = malloc(sizeof(char) * (len1 + n + 1));
	}
	else if (n >= len2)
	{
		p = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (!p)
		return (NULL);
	for (i = 0, i < len1, i++)
		p[i] = s1[i];

	j = 0;

	while (n < len2 && i < (len1 + n))
		p[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		p[i++] = s2[j++];

	p[i] = '\0';

	return (p);
}
