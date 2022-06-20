#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: str to be searched
 * @needle: substr to look for
 * Return: a pointer to the beginning of the
 * located substr or NULL if substr not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)

			if (haystack[i + j] != needle[j])
				break;

		if (!needle[j])
			return (&haystack[i]);
	}

	return (NULL);
}
