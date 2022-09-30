#include <stdio.h>
#include <stdlib.h>
/**
 * main - addition of numbers
 * @argc: count of argument
 * @argv: the values to add
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	int i, j, add;
	
	add = 0;
	
	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for(j = 0; argv[i][j] != '\0'; j++)
		{
			if(argv[i][j] < '\0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);

	return (0);
}
