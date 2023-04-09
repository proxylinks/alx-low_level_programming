#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponent
 * @pow: power of the exponent
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int number;
	unsigned int a;

	number = 1;
	for (a = 1; a <= pow; a++)
		number *= base;
	return (number);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number of printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, res;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		res = n & dev;
		if (res == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
