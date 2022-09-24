#include "main.h"
/**
 * cap_string - capitalizing strings
 * @a: string to be capitalized
 * Return: string a;
 */
char *cap_string(char *a)
{
	int i, j;

	char spec[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	
	i = 0;
	
	while (a[i] != '\0')
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (a[i] == spec[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (a);
}
