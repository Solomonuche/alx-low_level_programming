#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a linked list
 * @head: linked list
 *
 * Return: (nothing)
 */

void free_listint2(listint_t **head)
{

	struct listint_s *prev_node, *temp;

	prev_node = temp = head;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		temp = temp->next;
		free(prev_node);
		prev_node = temp;
	}
	*head = NULL;
}
