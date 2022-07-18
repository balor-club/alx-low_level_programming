# include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: String
 * @needle: Substring
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(needle + j) == *(haystack + i))
				return (haystack + i);
		}
	}
	return ('\0');
}
