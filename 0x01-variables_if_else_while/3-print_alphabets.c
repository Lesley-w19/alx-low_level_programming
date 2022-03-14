#include <stdio.h>
/**
 * main - use putchar to print alphabet
 *
 * Description: print alphabets in lowercase and uppercase.
 *
 * Return:0 (success)
 */
int main(void)
{
	char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(alphabets[a]);
	}
	putchar('\n');
	return (0);
}
