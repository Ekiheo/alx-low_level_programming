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
		putchar(letter);
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	writechar('\n');

	return (0);
}
