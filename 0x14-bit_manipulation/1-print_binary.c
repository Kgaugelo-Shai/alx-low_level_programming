#include "main.h"

/**
 * _pow_finder - calculates the power of a base
 * @base: The base to be consider
 * @exponent: The highest value of exponent
 *
 * Return: value of base to the power of the exponent
 */
unsigned long int _pow_finder(unsigned int base, unsigned int exponent)
{
	unsigned long int answer;
	unsigned int idx;

	answer = 1;
	for (idx = 1; idx <= exponent; idx++)
		answer *= base;
	return (answer);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number we want to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dvsr;
	unsigned long int msk;
	char sgnl;

	sgnl = 0;
	dvsr = _pow_finder(2, sizeof(unsigned long int) * 8 - 1);
	while (dvsr != 0)
	{
		msk = n & dvsr;
		if (msk == dvsr)
		{
			_putchar('1');
			sgnl = 1;
		}
		else if (sgnl == 1 || dvsr == 1)
			_putchar('0');
		dvsr >>= 1;
	
}

