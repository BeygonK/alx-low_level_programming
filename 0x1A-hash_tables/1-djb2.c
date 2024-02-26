#include <stdint.h> // For uint32_t, ensuring the size of unsigned long int is consistent across platforms

/**
 * hash_djb2 - Implements the DJB2 hash algorithm
 * @str: The string to hash
 *
 * Return: The hash value of the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	uint32_t hash =  5381;
	int c;
	
	while ((c = *str++))
	{
		hash = ((hash <<  5) + hash) + c;
	}
	return (hash);
}
