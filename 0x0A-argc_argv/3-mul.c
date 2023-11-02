#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count the number of arguments
 * @argv: pointer to the location of the arguments parsed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res;
	int m1 = 0;
	int m2 = 0;

	if (arg == 3)
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		res = m1 * m2;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
