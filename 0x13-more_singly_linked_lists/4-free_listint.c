#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to the head of the list.
 *
 * Return: returns nothing.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_listint(head->next);
	free(head);
}
