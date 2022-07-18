#include "main.h"

/**
 * _memset -  fills n byted of memory
 * @s: pointer to start of memory
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: filled memory
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
