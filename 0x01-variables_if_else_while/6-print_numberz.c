#include <stdio.h>

/**
 * main - Prints single digot numbers from 0 to 10 using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; 0 < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
