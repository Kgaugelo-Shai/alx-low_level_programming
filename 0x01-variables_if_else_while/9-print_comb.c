#include <stdio.h>
/**
 * main - Entry level
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
		}
		i++;
	}

	putchar('\');
	return(0);
}
