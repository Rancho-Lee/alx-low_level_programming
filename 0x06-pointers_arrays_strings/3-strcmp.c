#include "main.h"
/**
 * _strcmp - comparing strings
 * @s1: first sttring
 * @s2: second string
 * Return: difference between the two strings;
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		i++;
	}
	result = s1[i] - s2[i];

	return (result);
}
