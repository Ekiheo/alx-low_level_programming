#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar("%d", a);
	}
	_putchar('\n');

	return (0);
}
