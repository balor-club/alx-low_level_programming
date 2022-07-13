# include "main.h"
# include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: (0) Success
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	_putchar("dest");
	_putchar('\n');
}
