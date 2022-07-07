# include "main.h"

/**
 * isupper - checks for uppercase letters
 * @c: character
 * ASCII numbers
 *
 * Return: 1 if c is uppercase. Otherwise 0
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
