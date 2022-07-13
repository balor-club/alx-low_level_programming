# include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: Integer
 *
 * Return: No return
 */

void print_number(int n)
{
	if (n > 9)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}

	_putchar(n);
}
