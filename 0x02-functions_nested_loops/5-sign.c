# include <stdio.h>
# include <stdlib.h>

/**
 * main - checks the code
 *
 * Return: 1 if greater than zero. 0 if zero. -1 if less than zero
 */

int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	putchar('\n');
}
