#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - a function that reverses a linked list
 * @head: linked list
 *
 * Return: (pointer to 1st node)
 */

listint_t *reverse_listint(listint_t **head)
{
	struct listint_s *currentnode, *nextnode;

	currentnode = nextnode = *head;
	*head = 0;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = *head;
		*head = currentnode;
		currentnode = nextnode;
	}

	return (*head);
}
