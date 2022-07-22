# include "main.h"

/**
 * _strlen - return length of a string
 * @s: Integer
 *
 * Return: Lenght of the sring
 */


int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
