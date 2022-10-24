#include "lists.h"

/**
* pop_listint - that deletes the head node of a listint_t linked list
* @head: head of the list
* Return:  returns the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	int xnode;
	listint_t *h;
	listint_t *unk;

	if (*head == NULL)
		return (0);
	unk = *head;

	xnode = unk->n;

	h = unk->next;

	free(unk);

	*head = h;

	return (xnode);
}
