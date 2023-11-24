#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int checker;
	unsigned long int bin_div;
	char flg;

	flg = 0;
	bin_div = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (bin_div != 0)
	{
		checker = n & bin_div;
		if (checker == bin_div)
		{
			flg = 1;
			_putchar('1');
		}
		else if (flg == 1 || bin_div == 1)
		{
			_putchar('0');
		}
		bin_div >>= 1;
	}
}
