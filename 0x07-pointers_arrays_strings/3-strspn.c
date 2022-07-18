# include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: String
 * @accept: Bytes
 *
 * Return: Number of bytes from initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if *(s + i) == *(j + accept)
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
