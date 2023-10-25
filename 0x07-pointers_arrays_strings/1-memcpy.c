#include "main.h"
/**
 * _memcpy - Copies memory from src to dest
 * @dest: Pointer to destination
 * @src: Pointer to source
 * @n: Number of bytes to be copied
 *
 * Return: Return pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
