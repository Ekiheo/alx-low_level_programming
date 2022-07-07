#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: n - variable
 * Return: diagonal line on terminal ending with a new line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 10)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
				{
					_putchar(' ');
					break;
				}
				_putchar('\n');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
