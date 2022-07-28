# include "main.h"
# include <stdio.h>
# include <<stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: an array
 * @max: array
 *
 * Return: poniter to newly created array
 */

int *array_range(int min, int max)
{
	int *t;
	int i;
	int len;

	if (min > max)
		return (NULL);

	len = 0;
	for (i = 0; min <= max; i++, min++)
		len++;

       	t = malloc(sizeof(int) * len);

	if (t == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}

	return (t);
}
