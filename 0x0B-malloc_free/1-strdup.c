#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a newly allocated memory space
 * @str: string
 *
 * Return: returns pointer of an array of strings
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for ( a = 0; str[a] != '\0'; a++)
		;

	strout = (char *)malloc(sizeof(char) * (a + 1));

	if (strout  == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		strout[b] = str[b];

	return (strout);
}
