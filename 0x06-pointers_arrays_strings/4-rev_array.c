# include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: An array of integers
 * @n: Number of elements in the array
 *
 * Return: (0)
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	for (int i = 0; i < length; i++)
		_putchar(a[i]);

	return (0);
}
