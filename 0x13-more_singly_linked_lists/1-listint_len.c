#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	else
	{
		h = h->next;
		return (listint_len(h + 1))
	}
}
