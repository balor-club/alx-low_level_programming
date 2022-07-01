# include <stdlib.h>
# include <stdio.h>
# include <time.h>
/* more headers go there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		/* if condition is true then print the following */
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		 /* if else if is true */
		printf("%d is zero\n", n);
	} else 
	{
		/* if none of the conditions is true */
		printf("%d is negative\n", n);
	}

	return (0);
}
