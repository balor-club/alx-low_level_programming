# include "main.h"

/**
 * _islower - check the code
 * @c: The character in ASCII code
 * Return - (1) if c is lowercase; else (0)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
