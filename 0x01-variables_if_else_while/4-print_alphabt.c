# include <stdio.h>

/*
 * main - prints lowercase alpha but remove 'q' and 'e'
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z');
	{
		if ((alpha !='q') && (alpha !='e'));
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
