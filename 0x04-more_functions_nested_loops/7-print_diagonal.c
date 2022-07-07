#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input number of times '\' should be repeated
 * Return: diagonal line on terminal ending with a new line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 10)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
