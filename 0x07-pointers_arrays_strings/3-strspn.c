#include "main.h"
/**
 * _strspn - getting the llength of a prefix substring
 * @s: string to compare
 * @accept: subsring to cmpare
 * Return: unsigned int;
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (count);
}
