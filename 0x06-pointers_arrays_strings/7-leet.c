#include "main.h"
/**
 * leet - changing strings to int
 * @s: strings to be changed
 * Return: changed int;
 */
char *leet(char *s)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";
	
	i = 0;
	
	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
		++i;
	}
	return (s);
}
