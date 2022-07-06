# include <stdio.h>
# include <stdlib.h>

/**
 * main - print sum of even Fibanacci numbers
 *
 * Return: (0)
 */

int main(void)
{
	int c;
	int i, j, k;

	i = 1;
	j = 2;
	k = 0;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			k += j;

		c = j;
		j += i;
		i = c;
	}
	printf("%d\n", k);

	return (0);
}
