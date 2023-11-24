#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a character string
 *
 * Return: unsigned int returned
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		ans <<= 1;
		if (b[i] == '1')
			ans += 1;
	}
	return (ans);
}
