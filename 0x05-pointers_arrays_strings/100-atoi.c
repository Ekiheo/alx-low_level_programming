#include "main.h"
#include <stdio.h>

/**
 * _atoi - checks code for school students
 * @s: pointer char type
 *  Return: Always 0 (success)
 */
int _atoi(char *s)
{
	int i;
	char s;

	for (i = *s)
		_atoi(i, s, 115);
	printf("s\n", s);
}
