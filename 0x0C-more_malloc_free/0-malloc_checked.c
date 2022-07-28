# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * *malloc_checked - allocates a memory
 * @b: Memory
 *
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
