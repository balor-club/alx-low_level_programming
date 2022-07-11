# include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts string to integer
 * @s: string
 *
 * Return: Integer value
 *
 */

int _atoi(char *s)
{
	int i, j, n, m;

	i = n = 0;
	m = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++:
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (n);
}
