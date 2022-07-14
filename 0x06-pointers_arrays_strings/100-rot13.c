# include "main.h"

/**
 * *rot13 - encodes a string using rot13
 *
 * @s: String
 *
 * Return: pointer to dest
 */

char *rot13(char *s)
{
	int count = 0, i;
	int alphabet[] = {abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ};
	int rot13[] ={nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
