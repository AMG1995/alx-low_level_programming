#include "hash_tables.h"

/**
 * hash_table_create - create new hash table
 * @size: size of array.
 *
 * Return: pointer to new hash table
 * and return NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = calloc(size, sizeof(hash_node_t *));
	ht->size = size;

	if ((ht->array) == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
