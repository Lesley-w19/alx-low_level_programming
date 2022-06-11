#include "lists.h"

/**
 *  free_dlistint - free a struct linked list
 *
 * @head: first element
 *
 * Return: frees a dlistint_t list
 *
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
