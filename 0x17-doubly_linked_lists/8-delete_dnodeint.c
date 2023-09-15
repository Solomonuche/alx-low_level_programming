#include "lists.h"
/**
 * delete_dnoteint_at_index - a function that deletes the node at index
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

	if (head == NULL || index < i)
	{
		return (-1);
	}
	else
	{
		if (index == 0)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
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

		tmp->prev->next = tmp->next;

		if (tmp->next != 0)
		{
			tmp->next->prev = tmp->prev;
		}
		free(tmp);
	}

	return (1);
}

