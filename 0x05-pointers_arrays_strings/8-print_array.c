# include "main.h"
#include "2-strlen.c"

/**
 * print_array - prints n elements of an array of integers
 * @a: Pointer of array
 * @n: Number of elements
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = o; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
