# include "main.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @ch: Character
 * ASCII numbers
 *
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar("\n");
}
