#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: (1) Success
 */

int main(void)
{
	const char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, m, 59);
	return (1);
}
