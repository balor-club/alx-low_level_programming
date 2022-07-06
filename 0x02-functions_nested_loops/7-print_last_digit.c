# include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @nv: An integer
 *
 * Return: Last digit of the number
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
