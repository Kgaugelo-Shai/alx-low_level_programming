#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: pointer to address where name is stored
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
