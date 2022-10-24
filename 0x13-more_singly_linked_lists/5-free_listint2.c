#include "lists.h"

/**
* free_listint2 - a function that frees a listint_t list
* @head: head of list
* Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *unk;

	if (head != NULL)
	{
		unk = *head;
		while ((tmp = unk) != NULL)
		{
			unk = unk->next;
			free(tmp);
		}
		*head = NULL;
	}

}

