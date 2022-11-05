#include "main.h"
/**
 * binary_to_unit - convert binary to unit
 * @b: pointer to the binary to be converted
 * Return: int
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int dec_val = 0;


	if (!b)
		return (0);

	for (i = 0; i != '\0'; i++)
	{
		if (b[1] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
