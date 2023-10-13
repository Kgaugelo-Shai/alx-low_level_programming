#include "main.h"

/**
 * print_square - prints a square on terminal
 * @size: determines the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int length = 0;

		while (length < size)
		{
			int width = 0;

			while (width < size)
			{
				_putchar('#');
				width++;
			}
			_putchar('\n');
			length++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
