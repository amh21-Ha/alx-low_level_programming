#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: head of list
* @index: index of the node
* Return: returns the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y;

	for (y = 0; y < index && head != NULL; y++)
	{
		head = head->next;
	}
	return (head);
}
