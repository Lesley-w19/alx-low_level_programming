#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the
 * terminating null byte(\0), to the buffer pointed by dest
 * @dest: pointer to the buffer where the str is copied to
 * @src: pointer to the str to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
