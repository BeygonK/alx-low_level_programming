#include "main.h"
/**
 * _strcpy - function to do so,ething
 * @dest: param
 * @src: param
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start;

	dest_start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
