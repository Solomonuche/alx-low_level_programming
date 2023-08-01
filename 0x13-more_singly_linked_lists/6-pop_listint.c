#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: linked list
 *
 * Return: (head node data)
 */

int pop_listint(listint_t **head)
{
	struct listint_s *temp;
	int value;

	if (*head == NULL)
		return (0);

	temp = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (value);
}
