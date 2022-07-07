#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 t0 9 except 2 and 4
 *
 * Return: 0 t0 9 except 2 and 4 followed by a new line
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
		{
			for (a != 2 && a != 4)
				continue;
		}
		_putchar('\n');
	}
}
