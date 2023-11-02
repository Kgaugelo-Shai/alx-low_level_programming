#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: counts the number of arguments
 * @argv: a pointer to the emeomry where the arguments are stored
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
