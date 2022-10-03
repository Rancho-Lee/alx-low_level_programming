#include "main.h"
#include <stdlib.h>
/**
 * create_array - creating an array by allocation of memory
 * @size: size of memory to be allocated
 * @c: character to allocate memory for
 * Return: char;
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (0);
	}

	i = 0;

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';

	return (p);
}
