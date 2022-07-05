# include <stdio.h>
# include <stdlib.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int char alpha = 'a';
	
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
