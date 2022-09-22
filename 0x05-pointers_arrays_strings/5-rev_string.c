#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: 0;
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, len1;

	len = 0;

	while (s[len])
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len; i++)
	{
		tmp = s[len1];
		s[len1] = s[i];
		s[i] = tmp;
		len1--;
	}
}
