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
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
