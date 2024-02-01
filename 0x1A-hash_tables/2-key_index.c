#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key
 * @size: The size of the array of the hash table
 * Return: The index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Use the hash_djb2 function to get the hash value of the key */
	unsigned long int hash = hash_djb2(key);

	/* Use the modulo operator to get the index within the array size */
	unsigned long int index = hash % size;

	/* Return the index */
	return (index);
}
