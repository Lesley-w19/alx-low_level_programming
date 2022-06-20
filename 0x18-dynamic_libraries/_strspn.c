#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: str to evaluate
 * @accept: str containing the list of char(s) to match
 * Return: the no. of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}

		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}
