#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters that follow last index
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, ans;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		ans = va_arg(ptr, int);
		printf("%d", ans);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ptr);
}
