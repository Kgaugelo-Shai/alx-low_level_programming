#include "main.h"

/**
 * print_diagonal - prints a diagonal line on terminal
 * @n: inicates how long the line is
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int lines = 0;

		while (lines < n)
		{
			int spaces = 0;

			while (spaces < lines)
			{
				_putchar(' ');
				spaces++;

			}
			_putchar('\\');
			_putchar('\n');
			lines++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
