#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: string input
 * @src: second string input
 * Return: concanated strings
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
