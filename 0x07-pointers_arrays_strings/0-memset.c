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
	return (memset(s, b, n));
}
