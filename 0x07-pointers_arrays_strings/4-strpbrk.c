#include "main.h"
/**
 * _strpbrk - Search a string
 * @s: Pointer to the string to be searched
 * @accept: POinter to stgring
 *
 * Return: POinter to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		unsigned int i;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
