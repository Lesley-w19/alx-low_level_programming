#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments in a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: returns a pointer to an array of char
 */

char *argstostr(int ac, char **av)
{
	char *agout;
	int x, y, z, ya;

	if (ac == 0)
		return (NULL);

	for (x = y = 0; y < ac; y++)
	{
		if (av[y] == NULL)
			return (NULL);

		for (z = 0; av[y][z] != '\0'; z++)
			x++;
		x++;
	}

	agout = malloc((x + 1) * sizeof(char));

	if ( agout == NULL)
	{
		free(agout);
		return (NULL);
	}

	for (y = z = ya = 0; ya < x; y++, ya++)
	{
		if (av[y][z] == '\0')
		{
			agout[ya] = '\n';
			y++;
			ya++;
			z = 0;
		}

		if (ya < x - 1)
			agout[ya] = av[y][z];
	}

	agout[ya] = '\0';

	return (agout);
}



