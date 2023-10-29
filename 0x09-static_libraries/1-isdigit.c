#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: takes in an integer c
 *
 * Return: 1 if c is a digit, o otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 58))
	{
		return (1);
	} else
		return (0);
}
