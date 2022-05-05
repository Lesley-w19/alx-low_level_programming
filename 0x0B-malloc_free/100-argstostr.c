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
	int x, y, z, ma;

	if (ac == NULL)
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

	for (y = z = ma; ma < x; y++, ma++)
	{
		if (av[y][z] == '\0')
		{
			agout[ma] = '\n';
			y++;
			ma++;
			z = 0;
		}

		if (ma < x - 1)
			agout[ma] = av[y][z];
	}
	agout[ma] = '\0';

	return (agout);
}



