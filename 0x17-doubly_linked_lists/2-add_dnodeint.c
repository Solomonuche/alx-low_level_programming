#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a dlistint_t list
 * @h: head nodes to the list
 * @n: struct member
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (*head == NULL)
		return (0);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (0);
	new_node->prev = 0;
	new_node->n = n;
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
