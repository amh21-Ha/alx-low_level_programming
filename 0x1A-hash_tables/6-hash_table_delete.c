#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *next_node;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Loop through the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Traverse the linked list at each index */
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			/* Save the next node */
			next_node = current_node->next;

			/* Free the key and value of the current node */
			free(current_node->key);
			free(current_node->value);

			/* Free the current node */
			free(current_node);

			/* Move to the next node */
			current_node = next_node;
		}
	}

	/* Free the array of the hash table */
	free(ht->array);

	/* Free the hash table structure */
	free(ht);
}
