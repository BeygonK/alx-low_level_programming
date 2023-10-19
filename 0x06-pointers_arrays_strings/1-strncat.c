#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenate a string
 * @dest: First string
 * @src: Second string
 * @n: integer
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp;

	temp = strncat(dest, src, n);
	return (temp);

	return (0);
}
