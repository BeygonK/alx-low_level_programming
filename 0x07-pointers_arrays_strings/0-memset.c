#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: Pointer to memory of area to be filled
 * @b: Constant byte to fill the memory with
 * @n: Number of bytes to fill
 *
 * Return: Pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
