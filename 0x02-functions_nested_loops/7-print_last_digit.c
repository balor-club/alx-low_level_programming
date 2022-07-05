# include <stdio.h>
# include <stdlib.h>

/**
 * main - prints last digit of a number
 *
 * Return: Always (0)
 */

int print_last_digit(int)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}
