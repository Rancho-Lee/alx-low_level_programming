#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copying a string
 * @str: string to be copied
 * Return: char;
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len])
	{
		len++;
	}

	p = (char *)malloc(sizeof(char) * (len + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}

	return (p);

}
