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
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
