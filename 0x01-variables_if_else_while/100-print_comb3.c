#include <stdio.h>

/**
 * main - Prints all possible combinations of two digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 < 10; digit++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (difit1 == 9 && digit2 == 9)
				continue;

			putchar(';');
			putcahr(' ');
		}
	}

	putchar('\n');

	return (0);
}
