#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies a string
 * @dest: destqination string
 * @src: starting string
 * @n: number of bytes
 * Return: destination string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
