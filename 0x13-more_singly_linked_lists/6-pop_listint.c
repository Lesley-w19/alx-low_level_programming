#include <stdlib.h>
#include "lists.h"

/**
 *  pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n).
 *
 * @head: first element
 *
 * Return: number of the pop's element
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *first;
	listint_t *next;

	if (head == NULL)
		return (0);

	first = *head;

	if (first == NULL)
		return (0);

	next = (*head)->next;

	n = (*head)->n;
	*head = next;
	free(first);

	return (n);
}
