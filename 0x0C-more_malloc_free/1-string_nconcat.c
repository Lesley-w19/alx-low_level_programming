#include <stdlib.h>
#include "main.h"

/**
 * string_nconcact - concatenates/combines two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 *
 * Return: returns a pointer to a newly allocated memory.
 * If malloc fails, the process termination should be of state value 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a1, a2, aout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a1 = 0; s1[a1] != '\0'; a1++)
		;

	for (a2 = 0; s2[a2] != '\0'; a2++)
		;

	if (n > a2)
		n = a2;

	aout = a1 + n;

	p = malloc(aout + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < aout; i++)
		if (i < a1)
			p[i] = s1[i];
		else
			p[i] = s2[i - a1];

	p[i] = '\0';

	return (p);
}
