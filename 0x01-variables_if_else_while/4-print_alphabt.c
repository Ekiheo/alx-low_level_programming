#include <stdio.h>

/**
 * main - Prints alphabest in lowercase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter\n);
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter\n);
	}
	return (0);
}
