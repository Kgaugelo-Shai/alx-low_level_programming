#include <stdio.h>

/**
 * main - initiates Fixx-Buzz test
 *
 * Return: Always 0
 */
int main(void)
{
	int count = 1;

	while (count <= 100)
	{
		if ((count % 3 == 0) && (count % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", count);
		}
		printf(" ");
		count++;
	}
	printf("\n");

	return (0);
}

