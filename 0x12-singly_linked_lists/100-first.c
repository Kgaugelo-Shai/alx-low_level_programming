#include "lists.h"

void runBeforeStart(void) __attribute__((constructor));

/**
 * runBeforeStart - function that is executed before the main function
 * Return: void
 */

void runBeforeStart(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}