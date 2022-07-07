# include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times line should be printed
 */

void print_line(int n)
{
	int len;

	if n > 0
	{
		for (len = 0; len < n; len++)
			_putchar(_);
	}

	_putchar('\n');
}
