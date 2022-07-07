# include "main.h"

/**
 * more numbers - prints numbers ten times
 *
 */

void more_numbers(void)
{
	int count = 10;
	int num = 0;

	for (num = 0; num <= 14; num++)
	{
		_putchar((num % 10) + '0');
	}
	_putchar('\n');

	count++;
}
