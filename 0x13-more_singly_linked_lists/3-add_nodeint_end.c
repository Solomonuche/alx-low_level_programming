#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - a function that add new node at the end of a linked list
 * @head: linked list
 * @n: integer
 *
 * Return: (new node address or NULL)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = 0;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
