#include "main.h"
/**
 * _strspn - Gets length of prefix sunstr
 * @s: POinter to string to be searched
 * @accept: Pointer to string containing
 *
 * Return: NUmber of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int found;

	count = 0;
	while (*s)
	{
		unsigned int i;

		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (count);
}
