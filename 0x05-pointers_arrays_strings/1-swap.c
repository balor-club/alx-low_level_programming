# include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: Integer
 * @b: Integer
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
