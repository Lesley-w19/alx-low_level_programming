#include "main.h"

/**
 * *_strchr - locates a char in a str
 * @s: str to be checked
 * @c: char to be located
 * Return: pointer to the first occurence of the char c
 * in the str, or NULL if char is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
