# include "variadic_functions.h"
# include <stdio.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: Parameter
 *
 * Return: Sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
