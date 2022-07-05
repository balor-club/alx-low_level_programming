# include <stdio.h>
# include <stdlib.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: Always (0) Success
 */

void print_alphabet(void)
{
	char alpha = 'a';
	
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
