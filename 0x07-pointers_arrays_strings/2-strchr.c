#include "main.h"
/**
 * _strchr - returning a pointer to the first string char
 * @s: string to return from
 * @c: character to check for in string
 * Return: char;
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
