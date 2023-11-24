#include "main.h"

/**
 * _power - finds the power of a number
 * @bse: the base of the number
 * @pwr: power of the exponent
 *
 * Return: the value of the base exponent power
 */
unsigned long int _power(unsigned int bse, unsigned int pwr)
{
	unsigned long int ans;
	unsigned int i;

	ans = 1;
	for (i = 1; i <= pwr; i++)
		ans *= bse;
	return (ans);
}
