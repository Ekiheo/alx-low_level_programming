#include <stdio.h>

/**
 * main - Prints alphabest in lowercase then in uppercase
 *
 * Return: Always (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
