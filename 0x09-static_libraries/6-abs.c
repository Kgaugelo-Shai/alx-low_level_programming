#include "main.h"

/**
 * _abs - finds the absolute value of an integer
 * @n: the value converted
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = (n * -1);
		return (n);
	}
}
