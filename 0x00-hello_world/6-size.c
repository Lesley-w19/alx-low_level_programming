#include<stdio.h>
/**
 * main - using the main to check size of types
 *
 * Description: print size of variable types
 *
 * Return:0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char : %ld byte(s)\n", sizeof(a));
	printf("Size of an int : %ld byte(s)\n", sizeof(b));
	printf("Size of long int : %ld byte(s)\n", sizeof(c));
	printf("Size of long long int : %ld byte(s)\n", sizeof(d));
	printf("Size of float : %ld byte(s)\n", sizeof(e));
	return (0);
}
