#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @a: the string inputed
 * Return: string a
 */
char *rot13(char *a)
{
	int i;
	int j;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 26 * 2; j++)
		{
			if (a[i] == str1[j])
			{
				a[i] = str2[j];
				break;
			}
		}
	}
	return (a);
}

