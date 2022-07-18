#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: character string
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: filled memory
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (k);
}
