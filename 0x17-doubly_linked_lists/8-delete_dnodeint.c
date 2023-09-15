#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * of a dlistint_t linked list.
 * @head: head node of a list
 * @index: list index
 *
 * Return: (1) on success or (-1) on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (i < index && tmp != 0)
	{
		i++;
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (-1);


	if (tmp->next == 0)
	{
		tmp->prev->next = NULL;
	}
	else
	{
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
	}
	free(tmp);
	return (1);
}

