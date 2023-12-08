#include "main.h"

/**
 * flip_bits - calculates the number of bits to flip
 * to get from one number to another
 * @n: first number in range
 * @m: second number in range
 *
 * Return: number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cntbt = 0;
	int i;
	unsigned long int crrnt;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		crrnt = excl >> i;
		if (crrnt & 1)
			cntbt++;
	}

	return (cntbt);
}

