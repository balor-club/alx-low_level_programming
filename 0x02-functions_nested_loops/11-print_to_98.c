# include "main.h"

/**
 * print_to_98 - prints all natural numbers
 *
 * Return: (0)
 */

void print_to_98(int n)
{
	for (n <= 98; n++)
	{
		_putchar(n);
	}
	_putchar(',');
	_putchar(' ');
	_putchar('\n');

	return (0);
}
