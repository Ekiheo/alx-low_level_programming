#include "main.h"

/**
 * sqrt_checking_check - checks for natural square root of a number
 * @x: same as n
 * @y: iterating number
 *
 * Return: if success 1, -1 if failed
 */
int sqrt_checking(int x, int y)
{
	if (y * y == x)
		return (b);
	else if (y * y > x)
		return (-1);
	return (sqrt_checking(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number
 *
 * Return: if success 1, -1 if failed
 */
_sqrt_recursion(int n)
{
	return (sqrt_checking(n, 1));
}
