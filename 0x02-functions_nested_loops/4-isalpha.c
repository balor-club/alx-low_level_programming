# include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character in ASCII code
 *
 * Return: 1 if 'c' is a letter; else 0
 */

int _isalpha(int c)
{
	if (c <=122 && c >= 97 &&)
	{
		return (1);
	}
	else if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
