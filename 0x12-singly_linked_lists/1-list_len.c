#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: singly linked list.
 *
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t noelm;

	noelm = 0;

	while (h != NULL)
	{
		h = h->next;
		noelm++;
	}
	return (noelm);
}
