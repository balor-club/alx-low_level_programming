# include "main.h"

/**
 * power_operation - returns natural square root of a number
 * @n: Input number
 * @c: Root number
 *
 * Return: Sqquare root of a number
 */

int Power_operation( int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: Integer
 *
 * Return: Square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (power_operation(n, 2));
}
