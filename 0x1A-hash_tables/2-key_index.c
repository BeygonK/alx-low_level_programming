#include "hash_tables.h"
/**
 * key_index - Calculates the index for a key in the hash table
 * @key: The key to find the index for
 * @size: The size of the hash table's array
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value = hash_djb2(key);
    return hash_value % size;
}
