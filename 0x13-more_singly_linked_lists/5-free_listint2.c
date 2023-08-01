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

	struct listint_s *temp, *nxtnode;

	temp = *head;

	if (*head == NULL)
		return;
	while (temp != NULL)
	{
		nxtnode = temp->next;
		free(temp);
		temp = nxtnode;
	}
	*head = NULL;
}
