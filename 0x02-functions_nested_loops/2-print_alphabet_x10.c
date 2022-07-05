# include <stdio.h>
# include <stdlib.h>

/**
 * print_alphabet_x10 - prints a-z ten times
 *
 * Return: Always (0) Success
 */

int void print_alphabet_x10(void)
{
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
