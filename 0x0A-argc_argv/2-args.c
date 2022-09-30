#include <stdio.h>
/**
 * main - printing all arguments
 * @argc: argument count
 * @argv: array of variables
 * Return: int;
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		int i = 0;
		if (argc >= i)
		{
			printf("%s\n", argv[0]);
			return (0);
		}
	}
}
