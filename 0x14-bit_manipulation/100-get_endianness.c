100-get_endianness.c


#include "main.h"

/**
 * get_endianness - unction that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int index;
	char *check;

	index = 1;
	check = (char *)&index;
	return (*check);
}

