#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 characters
 *
 * Return: converted number or 0
 **/

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int d;

	d = 0;
	if (!b)
		return (0);
	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (c = 0; b[c] != '\0'; c++)
	{
		d <<= 1;
		if (b[c] == '1')
			d += 1;
	}
	return (d);
}
