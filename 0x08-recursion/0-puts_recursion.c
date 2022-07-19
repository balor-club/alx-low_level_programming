# include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: String
 *
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if (s != '\0')
	{
		_putchar(s);
	}
	else 
	{
		_putchar('\0');
	}
	_putchar('\n');
}
