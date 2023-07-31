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

	pre_node = temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		free(pre_node);
		temp = temp->next;
		prev_node = temp;
	}
}
