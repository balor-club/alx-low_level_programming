# include <stdio.h>
# include <stdlib.h>

/**
 * main - print largest prime factor
 *
 * Return: (0)
 */

int main(void)
{
	long int n, fd;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}