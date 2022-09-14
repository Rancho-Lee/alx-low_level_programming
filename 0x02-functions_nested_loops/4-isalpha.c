#include "main.h"
/**
 * _isalpha - checks for alphabet
 *
 * @c: parameter of function
 *
 * Return: 0;
 *
 */
int _isalpha(int c)
{
	if (65 < c < 90 || 96 < c < 123)
	{
		return (1);
	}
	else 
	{
		return (0);
	}

	return (0);
}
