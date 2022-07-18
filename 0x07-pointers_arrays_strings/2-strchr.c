#include "main.h"

/**
 *  _strchr - locates a character in a string
 *  @s: string being checked
 *  @c: character being looked for
 *  @s. Return Null if character is not found
 *  Return: pointer to @c in string s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
