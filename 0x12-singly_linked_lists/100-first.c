# include "lists.h"

/**
 * bmain - prints a line before the main function
 * is executed
 *
 * Return: none
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
