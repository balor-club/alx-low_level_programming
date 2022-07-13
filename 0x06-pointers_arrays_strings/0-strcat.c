# include "main.h"
# include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len, _len, i;

	i = 0;
	len = strlen(src);
	_len = strlen(dest);

	for (i = 0; i < len; i++)
	{
		dest[_len + i] = src[i];
	}
	
	return (dest);
}
