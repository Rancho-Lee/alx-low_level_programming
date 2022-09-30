#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing all arguments
 * @argc: argument count
 * @argv: array of variables
 * Return: int;
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
