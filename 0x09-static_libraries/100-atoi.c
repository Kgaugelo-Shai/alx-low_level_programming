#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be considered
 *
 * Return: integer converted from string
 */
int _atoi(char *s)
{
	int i = 0;
	int len = 0;
	int num = 0;
	int sign = 0;
	int ans = 0;
	int flag = 0;

	while (s[i] != '\0')
		len++;

	while (i < len)
	{
		if (s[i] == '-')
			sign++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			num = s[i] - '0';
			if (sign % 2)
				num = num * -1;
			ans = ans * 10 + num;
			if (s[i + 1] > '9' || s[i + 1] < '0')
				break;
			flag = 0;
		}
		i++;
	}

	if (flag == 0)
	{
		return (0);
	}
	else
		return (ans);
}
