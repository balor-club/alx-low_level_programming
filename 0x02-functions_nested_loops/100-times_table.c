# include "main.h"

/**
 * print_times_table - print n times table
 * @n: Number
 *
 */
void print_times_table(int n)
{
	int a = 0, b, v;

	if (n < 0 || n > 15)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			 v = a * b;
			 if (v > 99)
			 {
				 _putchar(v / 100 +'0');
				 _putchar((v / 10 % 10) + '0');
				 _putchar(v % 10 + '0');
			 }
			 else if (v > 9)
			 {
				 _putchar(' ');
				 _putchar(v / 10 + '0');
				 _putchar(v % 10 +'0');
			 }
			 else
			 {
				 _putchar(v = '0');
			 }
			 if (b != n)
			 {
				 _putchar(',');
				 _putchar(' ');
			 }
		}
		_putchar('\n');
		a++;
	}
}
