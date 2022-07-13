# include "main.h"
# include <stdio.h>

/**
 * *_strncpy - copies a string
 *
 * @dest: String
 * @src: String
 * @n: Number of bytes
 *
 * Return: (0)
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	_putchar(dest);
	_putchar('\n');

	return (0);
}
