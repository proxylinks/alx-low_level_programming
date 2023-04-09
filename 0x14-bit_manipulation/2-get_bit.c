#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: which index to check bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divide, results;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divide = 1 << index;
	results = n & divide;
	if (results == divide)
		return (1);

	return (0);
}
