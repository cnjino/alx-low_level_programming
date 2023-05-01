#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to the first node in the linked list
 * @index: index of the node to delete
 * Return: returns 1 on success and -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current_node = NULL;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (c < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		c++;
	}
	current_node = temp->next;
	temp->next = current_node->next;
	free(current_node);

	return (-1);
}
