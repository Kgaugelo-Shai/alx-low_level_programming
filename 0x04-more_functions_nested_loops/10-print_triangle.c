#include "main.h"

/**
 * print_triangle - prints traingle of terminal
 * @size: determines the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int lines = 1;

		while (lines <= size)
		{
			int spaces = (size - lines);
			int count = lines;

			while (spaces > 0)
			{
				_putchar(' ');
				spaces--;
			}
			while (count > 0)
			{
				_putchar('#');
				count--;
			}
			_putchar('\n');
			lines++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
