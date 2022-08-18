# include "main.h"

/**
 * get_bit - returns value of a bit
 * @index: index
 * @n:unsigned long int
 *
 * Return: Value of the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
