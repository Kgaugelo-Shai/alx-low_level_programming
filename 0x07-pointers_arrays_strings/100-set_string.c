#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the string to be considered
 * @to: the char value to set the pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
