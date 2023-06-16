#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - To determine if a random number is positive, negative or zero.
 *
 * Return- 0 if program runs successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*If else function*/
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
