# include <stdio.h>
# include <stdlib.h>

/**
 * main - prints Fibonacci numbers
 *
 * Return: (0)
 */

int main(void)
{
	int c;
	long int i, j, k;

	i = 1;
	j = 2;
	printf("%ld, %ld", i, j);
	for (c = 0, c < 48; c++)
	{
		k = i + j;
		printf("%ld", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
