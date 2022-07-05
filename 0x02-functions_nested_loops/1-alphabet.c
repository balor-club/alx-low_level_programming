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
	
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
