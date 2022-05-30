#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: head of the list.
 *
 * Return: returns the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t ndes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ndes++;
	}
	return (ndes);
}
