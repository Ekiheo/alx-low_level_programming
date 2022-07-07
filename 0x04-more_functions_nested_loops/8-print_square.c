#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int c, r;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for (r = 1; r <= size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
