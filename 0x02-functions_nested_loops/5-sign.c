#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number that is checked
 *
 * Return: 1 is positive, 0 is zero. -1 is negative
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar(n);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n);
		return (0);
	}
	else
	{
		_putchar(n);
		return (-1);
	}
}

