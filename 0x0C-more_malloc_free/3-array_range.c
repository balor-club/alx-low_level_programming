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
	int *ar;
	int i;
	
	if (min > max)
		return (NULL);
	
	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	
	if (ar == NULL)
		return (NULL);
	
	for (i = 0; min <= max; i++, min++)
		ar[i] = min;
	
	return (ar);
}
