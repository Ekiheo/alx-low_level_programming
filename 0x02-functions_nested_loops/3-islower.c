#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: single letter input
 * Return: 1 when c is lowecase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
