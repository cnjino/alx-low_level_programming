#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the first node in a linked list
 * Return: the data inside the node that was deleted or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int c;

	if (head == NULL || *head == NULL)
		return (0);

	c = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (c);
}
