#include <stdio.h>

/**
 * main - prints alphabest in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar("\n");

	return (0);
}
