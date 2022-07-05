#include "main.h"

/**
 * print_alphabet - prints alphabest in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
