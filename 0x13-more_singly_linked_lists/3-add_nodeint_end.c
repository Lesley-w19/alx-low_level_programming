#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * add_nodeint_end - a function that adds a new node at the  * end of a listint_t list.
 * @head: pointer to the head of the list.
 * @n: the element.
 *
 * Return: the address of the new element.
 * if fails, return NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}


