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
	unsigned int mask = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	mask = mask << index;

	*n = *n | mask;

	return (1);
}
