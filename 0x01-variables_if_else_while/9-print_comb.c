#include<stdio.h>
/**
 * main - using main toprint combination of numbers
 *
 * Description: print numbers seperated by comma and space
 * numbers to be printed in ascending order
 *
 * Return:0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
