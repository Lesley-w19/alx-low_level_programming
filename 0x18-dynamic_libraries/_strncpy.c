#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination str
 * @src: source str
 * @n: number of bytes(chars) to copy
 * Return: pointer to the resulting str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)	/* same as -> while (i < n)... i++ */
		dest[i] = '\0';

	return (dest);
}
