#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * insert_dnodeint_at_index - a function that insert node at index
 * @h: head node
 * @idx: list index
 * @n: list element
 *
 * Return: return new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int i = 1;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp->next != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (i == idx)
	{
		new->prev = temp;
		new->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
