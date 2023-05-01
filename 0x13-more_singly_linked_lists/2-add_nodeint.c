#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_nodeint - adds a new node at the beginning of a linked list
 * @n: the data for the new node to be addded
 * @head: the pointer to the first node in the list
 * Return: pointer to the added node or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
