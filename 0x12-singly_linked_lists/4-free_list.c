#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list -  frees a list
 * @head: list to be freed
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
