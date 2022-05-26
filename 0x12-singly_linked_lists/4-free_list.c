#include "lists.h"
#include <stdio.h>
#include <stlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: head of the list.
 *
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *crrnt;

	while ((crrnt = head) != NULL)
	{
		head = head->next;
		free(crrnt->str);
		free(crrnt);
	}
}
