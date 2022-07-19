#included "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the row of the array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int j = 1;

	while (a[0][j - 1] != 0)
	{
		_putchar(a[0][j - 1]);

		if (j > 1 && j % 8 == 0)
			_putchar('\n');
		j++;
	}
}
