# include "main.h"

/**
 * _abs - absolute value of an integer
 * @r: The integer
 *
 * Return: Always (0)
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-1 * r);
	}
	else
	{
		return (r);
	}
}
