#include "main.h"
/**
 *_isupper - checks for uppercase
 * @c: the charcter that is taken in
 *
 * Return: 1 is c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
