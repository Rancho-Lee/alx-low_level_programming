#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* A more complicated conditional structure*/
/**
 * main - returning an integer value for succes
 *
 * Return: 0;
 *
 */
int main(void)
{
	int n;
	int lst_dgt;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lst_dgt = n % 10;

	if (lst_dgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgt);
	}
	else if (lst_dgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_dgt);
	}
	else if (lst_dgt < 6 && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgt);
	}
	return (0);

}
