#include "main.h"
#include <stdio.h>

/**
 * _atoi - checks code for school students
 * @s: pointer char type
 *  Return: Always 0 (success)
 */
int _atoi(char *s)
{
	short boolean;
	int i, minus, reuslts;

	i = minus = results = boolean = 0;
	minus = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	results *= minus;
	return (0);
}
