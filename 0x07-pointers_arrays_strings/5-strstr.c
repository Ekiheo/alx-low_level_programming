#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates a substring
 * @needle: substring being located
 * @haystack: string being checked
 * Return: pointer to needle or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
			break;
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
