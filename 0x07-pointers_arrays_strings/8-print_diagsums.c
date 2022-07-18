# include "main.h"
# include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: Array to use
 * @size: Size of diagonal
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag0 = 0;
	int diag1 = 0;

	for (i = 0; i < size; i++)
	{
		diag0 += a[(i * size) + i];
		diag1 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diag0, diag1);
}
