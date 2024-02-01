#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key. Cannot be an empty string
 * @value: The value associated with the key.
 * Must be duplicated. Can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	/* Check if the hash table, key, or value are NULL */
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* Get the index of the key using the key_index function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists in the hash table */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* If the key matches, update the value and return 1 */
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	/* Create a new node with the key and value */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	/* Add the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* Return 1 on success */
	return (1);
}
