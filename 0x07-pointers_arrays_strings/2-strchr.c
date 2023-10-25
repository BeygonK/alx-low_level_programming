#include "main.h"
/**
 * _strchr - Locates the character in a string
 * @s: Pointer to string to be searched
 * @c: Character to be located
 *
 * Return: POinter to first occrence or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (*s == c)
		{
			return (s);
		}
	return (NULL);
}
