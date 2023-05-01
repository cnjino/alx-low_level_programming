#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node in question or NULL if node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *temp = head;

	while (temp && c < index)
	{
		temp = temp->next;
		c++;
	}

	return (temp ? temp : NULL);
}
