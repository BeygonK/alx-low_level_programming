#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of array
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;

	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table[i] = 0;
	}

	hash_table->size = size;
	return (hash_table);

}
