#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - a function that add new node at the beginning of a linked list
 * @head: linked list
 * @n: integer
 *
 * Return: (new node address or NULL)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
