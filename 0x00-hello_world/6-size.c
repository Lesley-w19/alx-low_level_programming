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
	short f;

	printf("Size of a char : %d byte(s)\n", sizeof(a));
	printf("Size of an int : %d byte(s)\n", sizeof(b));
	printf("Size of long int : %d byte(s)\n", sizeof(c));
	printf("Size of long long int : %d byte(s)\n", sizeof(d));
	printf("Size of float : %d byte(s)\n", sizeof(e));
	printf("Size of short : %d byte(s)\n", sizeof(f));
	return (0);
}
