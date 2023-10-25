#include "main.h"

/**
 * facttorial - returns the factorial of a given number
 * @n: the number to be factored
 *
 * Return: -1 if n is lower than 0. n otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
