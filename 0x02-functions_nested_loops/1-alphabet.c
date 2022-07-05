# include <stdio.h>
# include "main.h"

/**
 * main - print alphabet in lowercase
 *
 * Return: Always (0) Success
 */

void print_alphabet(void)
{
	char alpha;
	
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
