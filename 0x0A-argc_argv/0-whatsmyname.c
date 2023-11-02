#include <stdio.h>

/**
 * main - print the name of the program, follwed by a new line
 * @argc: counts number of arguments
 * @argv: pointer to an array containing arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
