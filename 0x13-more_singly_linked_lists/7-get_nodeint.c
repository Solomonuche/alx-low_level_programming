#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: linked list
 * @index: nth node
 *
 * Return: (nth node)
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	struct listint_s *temp;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (NULL);
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
