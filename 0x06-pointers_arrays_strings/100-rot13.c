#include <stdio.h>
#include <stdlib.h>

/**
 * rot13 - a function that encodes a string using rot13.(rotate by 13 places)
 * @c: is the char pointer.
 *
 * Return: returns a string encoded.
 */

char *rot13(char *c)
{
	char string_set[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char string_replace[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int size, s_target;

	for (size = 0; c[size] != '\0'; size++)
	{
		for (s_target = 0; string_set[s_target] != '\0'; s_target++)
		{
			if (string_set[s_target] == c[size])
			{
				c[size] = string_replace[s_target];
				break;
			}
		}
	}

	return (c);
}

