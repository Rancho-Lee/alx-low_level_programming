#include "main.h"
/**
 * string_toupper - coverting string to upper case
 * @s:string to be converted
 * Return: string result;
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
