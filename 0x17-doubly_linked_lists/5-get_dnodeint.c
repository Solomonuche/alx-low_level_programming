#include "lists.h"

/**
 * get_dnodeint_at_index -  a function that returns the node at nth
 * index of a dlistint_t list
 * @head: head node
 * @index: list index
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (temp);
	}
	else
	{
		while (i < index && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
	}
	return (temp);
}
