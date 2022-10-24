#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index index of a listint_t
* @head: head of the list
* @index: index of the list
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int y;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (y = 0; y < index - 1 && prev != NULL; y++)
		{
			prev = prev->next;
		}
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	return (1);
}
