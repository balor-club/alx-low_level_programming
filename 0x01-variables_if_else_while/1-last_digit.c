# include <stdlib.h>
# include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastdigit
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = *n
	/* your code goes there */
	if (lastdigit > 5)
	{
		/* if condition is true then print the following */
		printf("Last digit of %d is %d and is greater that 5\n", n, lastdigit);
	} else if (n == 0)
	{
		/* if else if condition is true */
		printf("Last digit of n is %d and is 0\n,", n);
	} else 
	{
		/* if none of the conditions is true */
		printf("Last digit of n is %d and is less than 6 and not 0\n",n);
	}
	return (0);
}
