#include "lists.h"

/**
* print_listint - function that prints all the elements of a listint_t list
* @h: head of list
* Return: numbers of node
*/

size_t print_listint(const listint_t *h)
{
	size_t numnode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numnode++;
	}
	return (numnode);
}
