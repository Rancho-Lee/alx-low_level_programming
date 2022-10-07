#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - checking malloc
 * @b: value
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
