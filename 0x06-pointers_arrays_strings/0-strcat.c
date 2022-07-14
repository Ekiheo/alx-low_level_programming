#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: source string
 * @src: destination string
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int gift = 0, i;

	while (dest[gift])
	{
		gift++;
	}
	for (i = 0; asrc[i] != 0; i++)
	{
		dest[gift] = src[i];
		gift++;
	}
	dest[gift] = '\0';
	return (dest);
}
