#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next;
	}

	*head = previous_node;

	return (*head);
}
