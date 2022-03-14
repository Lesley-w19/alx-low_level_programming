#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number n each time it is executed
 *
 * Description: print the number stored whether n is positive or negative.
 *
 * Return:0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 1)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
