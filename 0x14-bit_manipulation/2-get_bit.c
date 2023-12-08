#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number of bits until we find reach index
 * @index: index where nit is found
 *
 * Return:the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dvsr;
	unsigned long int msk;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	dvsr = 1 << index;
	msk = n & dvsr;
	if (msk == dvsr)
		return (1);
	return (0);
}
