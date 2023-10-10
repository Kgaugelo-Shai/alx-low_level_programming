#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while ((c <= 'z' && C <= 'Z'))
	{
		putchar(c);
		c++;
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
