#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - a function that frees a linked list
 * @head: linked list
 *
 * Return: (nothing)
 */

void free_listint(listint_t *head)
{
	struct listint_s *prev_node, *temp;

	prev_node = temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		free(prev_node);
		prev_node = temp;
	}
}
