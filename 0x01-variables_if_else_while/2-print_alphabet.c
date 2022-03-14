#include <stdio.h>
/**
 * main - use putchar to print alphabet
 *
 * Description: print alphabets in lowercase.
 *
 * Return:0 (success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alphabets[a]);
	}
	putchar('\n');
	return (0);
}
