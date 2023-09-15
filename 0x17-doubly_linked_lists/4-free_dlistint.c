#include "lists.h"
/**
 * free_dlistint - a function that frees a list
 * @head: head of list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
