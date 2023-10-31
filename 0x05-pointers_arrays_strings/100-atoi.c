#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @a: the string to be considered
 *
 * Return: integer converted from string
 */
int _atoi(char *s)
{
	int index = 0;
	int len = 0;
	int num = 0;
	int digit = 0;

	while (s[index] != '\0')
	{
		len++;
	}

	while (index < len && found == 0)
	{

