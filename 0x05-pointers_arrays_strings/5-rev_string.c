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

	while (len != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; k--)
	{
		tmp = s[i];
		s[i] = s[len1];
		[len1--] = tmp;
	}
}
