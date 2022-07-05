#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char i, alphabet;

	i = 10

	while (i <= 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		_putchar('\n');
	}
}
