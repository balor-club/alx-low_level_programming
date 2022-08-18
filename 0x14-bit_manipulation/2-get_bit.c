# include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: unsigned long int
 * @index: index
 *
 * Return: Value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 0;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index < bit)
		return (-1);

	mask = mask << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
