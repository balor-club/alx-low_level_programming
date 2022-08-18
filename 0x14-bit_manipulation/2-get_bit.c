# include "main.h"

/**
 * get_bit - returns value of a bit
 * @index: index
 * @n: bit given
 *
 * Return: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	undsigned int i;

	if (n == 0 && index < 64)
		return (0);


	for (i = 0; i <= 63; n >>= 1; i++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
	}
	return (-1);
}
