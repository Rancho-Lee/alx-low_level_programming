#include <stdio.h>
/**
 * main - printing the number of argument
 * @argc: number of argument passed
 * @argv: array of variable
 * Return: int;
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
