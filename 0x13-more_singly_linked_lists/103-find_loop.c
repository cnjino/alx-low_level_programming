#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return:  address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *behind = head;
	listint_t *ahead = head;

	if (head == NULL)
		return (NULL);

	while (behind && ahead && ahead->next)
	{
		ahead = ahead->next->next;
		behind = behind->next;
		if (ahead == behind)
		{
			behind = head;
			while (behind != ahead)
			{
				behind = behind->next;
				ahead = ahead->next;
			}

			return (ahead);
		}
	}

	return (NULL);
}
