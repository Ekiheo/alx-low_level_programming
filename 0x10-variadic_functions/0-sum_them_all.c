#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: constant unsigned int
 * @...: variale number of parameter
 * Return: sum of parameters and 0 if n is null
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index, n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
