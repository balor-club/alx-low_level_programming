# include <stdio.h>

/*
 * main - print lowercase and uppercase a-zA-Z, using putchar
 * Return: Always (0) Success
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /* prints lowercase*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*prints uppercase*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
