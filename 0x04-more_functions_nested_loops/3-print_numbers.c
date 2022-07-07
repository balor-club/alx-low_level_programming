# include "main.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @c: Character
 * ASCII numbers
 *
 */

void print_numbers(void)
{
	int c;

	if (c >= 48 && c <= 57)
	{
		_putchar(c);
	}
	_putchar("\n");
}
