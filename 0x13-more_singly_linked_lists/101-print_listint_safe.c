#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique codes
 * in a looped linked list
 * @head: pointer to the head of the linked list to check
 * Return: if the list is not looped 0 otherwise the number
 * of unique nodes in the linked list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *first, *second;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	second = (head->next)->next;

	while (second)
	{
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				nodes++;
				first = first->next;
				second = second->next;
			}

			first = first->next;

			while (first != second)
			{
				nodes++;
				first = first->next;
			}

			return (nodes);
		}

		first = first->next;
		second = (second->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a linked list
 * @head: a pointer to the head node in a linked list
 * Return: the number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("->[%p]%d\n", (void *)head, head->n);
	}

	return (nodes);
}
