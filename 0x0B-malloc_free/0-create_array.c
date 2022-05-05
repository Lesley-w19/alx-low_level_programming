#include "main.h"
#include  <stdlib.h>

/**
 * create_array - creates an array of chars
 * size - size of the array
 * c : stores char
 *
 * Return : pointer of an array of chars
 */

char *create_array(unsigned int size, char c){
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
