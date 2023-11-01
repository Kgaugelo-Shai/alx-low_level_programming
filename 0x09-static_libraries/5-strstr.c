#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be considered
 * @needle: substring to be found
 *
 * Return: poiter to beginning of substring, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *n == *h)
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
