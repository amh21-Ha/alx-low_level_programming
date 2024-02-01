#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to look for
 * Return: The value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	/* Check if the hash table or key are NULL */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* Get the index of the key using the key_index function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* If the key matches, return the value */
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	/* If the key was not found, return NULL */
	return (NULL);
}
