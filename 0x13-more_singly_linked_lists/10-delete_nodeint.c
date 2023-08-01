#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes
 * a node at index of a linked list
 * @head: linked list
 * @index: nth node
 *
 * Return: (nth node)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	struct listint_s *temp = *head, *curentnode, *nxtnode;

	if (*head == NULL)
		return (-1);

	while (i < index - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL && index != 0)
	{
		return (-1);
	}


	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	else
	{
		curentnode = temp->next;
		nxtnode = curentnode->next;
		temp->next = nxtnode;
		free(curentnode);
	}

	return (1);
}
