#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c : c - variable
 *
 * Return: Returns 1 if c is uppercase else retuns 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
