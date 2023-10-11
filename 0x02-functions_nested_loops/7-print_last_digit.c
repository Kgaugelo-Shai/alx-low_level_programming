#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of an integer
 * @n: the integer that is checked
 * Return: returns the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	printf("%d", last_digit);
	return (last_digit);
}
