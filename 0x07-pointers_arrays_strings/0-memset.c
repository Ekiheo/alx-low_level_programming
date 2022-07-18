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
	unsigned int k = 0;
	char *srat = s;

	while (k < n)
	{
		*s++ = b;
		k++;
	}
	return (srat);
}
