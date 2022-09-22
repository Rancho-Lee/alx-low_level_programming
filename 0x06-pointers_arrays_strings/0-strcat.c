#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenating two strings
 * @dest: destination of file
 * @src: the file source
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World\n ";
	char *ptr;
	
	ptr = _strcat(s1, s2);
	printf("%s", ptr);
}
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	
	return (dest);
}
