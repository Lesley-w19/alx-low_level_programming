#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at the beginning of 
 * a listint_t list.
 * @head: pointer to the head of the list.
 * n: an element of the list.
 *
 * Return: returns the address of the new element.
 * if it fails, return NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new = NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
