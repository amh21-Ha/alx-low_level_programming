#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int flag = 0;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Print the opening curly brace */
	printf("{");


	/* Loop through the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Traverse the linked list at each index */
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			/* Print a comma and a space if there is a previous key/value pair */
			if (flag == 1)
				printf(", ");

			/* Print the key and value in single quotes */
			printf("'%s': '%s'", current_node->key, current_node->value);

			/* Set the flag to 1 to indicate that there is a previous key/value pair */
			flag = 1;

			/* Move to the next node */
			current_node = current_node->next;
		}
	}

	/* Print the closing curly brace and a new line */
	printf("}\n");
}
