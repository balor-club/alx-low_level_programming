# include "main.h"
# include <stdio.h>

/**
 * *_strncat - concatenates two strings with n bytes
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes
 *
 * Return: (0);
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	if (sizeof(src) < n)
		_putchar("");

	_putchar(dest);
	_putchar('\n');

	return (0);
}
