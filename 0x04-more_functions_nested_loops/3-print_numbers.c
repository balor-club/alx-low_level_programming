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

	for (c >= 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar("\n");
}
